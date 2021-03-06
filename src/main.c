#include "point.h"
#include <math.h>
#include <stdio.h>

int main()
{
    FILE* f = fopen("Vivod", "w");
    Circle c;

    Vvod_Koordinat_cirlce(&c);

    Triangle t;

    Vvod_Koordinat_triangle(&t);

    print_cirlce(&c, f);
    float P, S;
    if (c.R > 0) {
        P = perimeter_circle(&c);
        S = area_circle(&c);
        print_P_S_circle(&c, P, S, f);
    }

    print_triangle(&t, f);
    float a, b, d;
    float pr1, pr2;
    pr1 = ((t.P[1].x - t.P[2].x) * (t.P[1].x - t.P[2].x));
    pr2 = ((t.P[1].y - t.P[2].y) * (t.P[1].y - t.P[2].y));
    a = sqrt(pr1 + pr2);
    pr1 = ((t.P[2].x - t.P[3].x) * (t.P[2].x - t.P[3].x));
    pr2 = ((t.P[2].y - t.P[3].y) * (t.P[2].y - t.P[3].y));
    b = sqrt(pr1 + pr2);
    pr1 = ((t.P[3].x - t.P[1].x) * (t.P[3].x - t.P[1].x));
    pr2 = ((t.P[3].y - t.P[1].y) * (t.P[3].y - t.P[1].y));
    d = sqrt(pr1 + pr2);
    if ((((a + b) > d) && ((a + d) > b) && ((b + d) > a))) {
        P = perimeter_triangle(&t);
        S = area_triangle(&t);
        print_P_S_triangle(&t, P, S, f);
    }

    top_in_circle(&t, &c, f);

    fclose(f);
    printf("\n");

    return 0;
}
