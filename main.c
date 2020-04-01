#include "point.h"
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
    P = perimeter_circle(&c);
    S = area_circle(&c);
    print_P_S_circle(&c, P, S, f);

    print_triangle(&t, f);
    P = perimeter_triangle(&t);
    S = area_triangle(&t);
    print_P_S_triangle(&t, P, S, f);

    fclose(f);
    printf("\n");

    return 0;
}
