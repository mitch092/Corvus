cmake_minimum_required (VERSION 3.15)
set(LIBRARY_NAME "Corvus")
set(TESTS_NAME "Corax")
project (${LIBRARY_NAME} VERSION 0.1.0 LANGUAGES CXX)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "Do not build in-source. Please remove CMakeCache.txt and the CMakeFiles/ directory. Then build out-of-source.")
endif()

# When C++20 modules support is more mature (add_library() with C++20 modules works), uncomment these and convert src/*.h to src/*.ixx (headers to modules).
#set(CMAKE_CXX_SYSROOT_FLAG_CODE "list(APPEND CMAKE_CXX_SOURCE_FILE_EXTENSIONS ixx)")
#message("CMAKE_CXX_SOURCE_FILE_EXTENSIONS ${CMAKE_CXX_SOURCE_FILE_EXTENSIONS}")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include(FetchContent)
FetchContent_Declare(
  doctest
  GIT_REPOSITORY https://github.com/doctest/doctest
  GIT_TAG 2.4.6
)
FetchContent_MakeAvailable(doctest)

add_library(
${LIBRARY_NAME} INTERFACE 
"src/test.h")
target_include_directories(${LIBRARY_NAME} INTERFACE src/)

add_executable(
${TESTS_NAME} 
"tests/main.cpp")

target_link_libraries(${TESTS_NAME} PUBLIC ${LIBRARY_NAME} doctest::doctest)

target_compile_features(${TESTS_NAME} PUBLIC cxx_std_20)
target_compile_options(${TESTS_NAME} PUBLIC
    $<$<CXX_COMPILER_ID:MSVC>:
        /W4 /WX /permissive- /Z7 /MT /MP /Bt+>)
target_compile_definitions(${TESTS_NAME} PUBLIC SEQUENTIAL_PROCESSING=0)
set_target_properties(${TESTS_NAME} PROPERTIES INTERPROCEDURAL_OPTIMIZATION ON)
