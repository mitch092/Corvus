cmake_minimum_required (VERSION 3.15)

if(CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "Do not build in-source. Please remove CMakeCache.txt and the CMakeFiles/ directory. Then build out-of-source.")
endif()

set(CMAKE_CXX_SYSROOT_FLAG_CODE "list(APPEND CMAKE_CXX_SOURCE_FILE_EXTENSIONS ixx)")
message("CMAKE_CXX_SOURCE_FILE_EXTENSIONS ${CMAKE_CXX_SOURCE_FILE_EXTENSIONS}")
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

project ("Corvus" VERSION 0.1.0 LANGUAGES CXX)

add_library(
${PROJECT_NAME} INTERFACE
src/test.ixx
)

target_include_directories(${PROJECT_NAME} INTERFACE src/)

target_compile_features(${PROJECT_NAME} INTERFACE cxx_std_20)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD_REQUIRED ON)

