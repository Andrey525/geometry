#define CTEST_MAIN

#include "ctest.h"
#include "point.h"

CTEST(circle_suite, preimeter_circle)
{
    // Given
    Circle c;
    c.R = 1;
    // When
    float result = perimeter_circle(&c);
    // Then
    const float expected = 6.28;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(circle_suite, area_circle)
{
    // Given
    Circle c;
    c.R = 1;
    // When
    float result = area_circle(&c);
    // Then
    const float expected = 3.14;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(triangle_suite, perimeter_triangle)
{
    // Given
    Triangle t;
    t.P[1].x = 0;
    t.P[1].y = 0;
    t.P[2].x = 6;
    t.P[2].y = 0;
    t.P[3].x = 3;
    t.P[3].y = 3;
    // When
    float result = perimeter_triangle(&t);
    // Then
    const float expected = 14.5;
    ASSERT_DBL_NEAR_TOL(expected, result, 0.3);
}

CTEST(triangle_suite, area_triangle)
{
    // Given
    Triangle t;
    t.P[1].x = 0;
    t.P[1].y = 0;
    t.P[2].x = 6;
    t.P[2].y = 0;
    t.P[3].x = 3;
    t.P[3].y = 3;
    Circle c;
    c.R = 1;
    // When
    float result = area_triangle(&t);
    // Then
    const float expected = 8.99;
    ASSERT_DBL_NEAR_TOL(expected, result, 0.3);
}

CTEST(intersection_suite, top_in_circle)
{
    // Given
    FILE* f = fopen("Vivod", "w");
    Triangle t;
    t.P[1].x = 0;
    t.P[1].y = 0;
    t.P[2].x = 6;
    t.P[2].y = 0;
    t.P[3].x = 3;
    t.P[3].y = 3;
    Circle c;
    c.R = 1;
    c.A.x = 0;
    c.A.y = 0;
    // When
    int result = top_in_circle(&t, &c, f);
    fclose(f);
    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
