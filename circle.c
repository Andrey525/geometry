#include "point.h"
#include <math.h>
#include <stdio.h>

void Vvod_Koordinat_cirlce(Circle* c)
{
    printf("Введите координаты центра окружности: ");
    scanf("%d %d", &c->A.x, &c->A.y);
    printf("Введите радиус окружности: ");
    scanf("%d", &c->R);
}

void print_cirlce(Circle* c, FILE* f)
{
    fprintf(f, "Circle((%d;%d), %d)\n", c->A.x, c->A.y, c->R);
    printf("Circle((%d;%d), %d)\n", c->A.x, c->A.y, c->R);
}