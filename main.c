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

    print_triangle(&t, f);

    fclose(f);
    printf("\n");

    return 0;
}
