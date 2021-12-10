#include "doctest/doctest.h"
#include "test.h"

TEST_CASE("first test") {
    auto var = cor::FirstFunction();
    CHECK(var == 42);
}
