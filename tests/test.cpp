#include "doctest/doctest.h"
#include "test.h"

TEST_CASE("My first test.") {
    auto var = cor::FirstFunction();
    CHECK(var == 42);
}
