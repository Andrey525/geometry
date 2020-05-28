#define CTEST_MAIN

#include "ctest.h"
#include "point.h"

CTEST(circle_suite, area_circle)
{
    // Given
    Circle c;
    c.R = 1;
    // When
    float result = perimeter_circle(&c);
    // Then
    const float expected = 6.28;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
