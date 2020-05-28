#include "point.h"
#include <math.h>
#include <stdio.h>

void Vvod_Koordinat_triangle(Triangle* t)
{
    printf("Введите координаты вершин треугольника:\n");
    for (int i = 1; i <= 3; ++i) {
        printf("Введите координаты вершины %d: ", i);
        scanf("%d %d", &t->P[i].x, &t->P[i].y);
    }
    t->P[4].x = t->P[1].x;
    t->P[4].y = t->P[1].y;
}

void print_triangle(Triangle* t, FILE* f)
{

    fprintf(f, "Triangle(");
    for (int i = 1; i <= 4; ++i) {
        fprintf(f, "(%d;%d)", t->P[i].x, t->P[i].y);
        if (i < 4) {
            fprintf(f, ", ");
        }
    }
    fprintf(f, ")\n");

    printf("Triangle(");
    for (int i = 1; i <= 4; ++i) {
        printf("(%d;%d)", t->P[i].x, t->P[i].y);
        if (i < 4) {
            printf(", ");
        }
    }
    printf(")\n");

    float a, b, c;
    pr1 = ((t.P[1].x - t.P[2].x) * (t.P[1].x - t.P[2].x));
    pr2 = ((t.P[1].y - t.P[2].y) * (t.P[1].y - t.P[2].y));
    a = sqrt(pr1 + pr2);
    pr1 = ((t.P[2].x - t.P[3].x) * (t.P[2].x - t.P[3].x));
    pr2 = ((t.P[2].y - t.P[3].y) * (t.P[2].y - t.P[3].y));
    b = sqrt(pr1 + pr2);
    pr1 = ((t.P[3].x - t.P[1].x) * (t.P[3].x - t.P[1].x));
    pr2 = ((t.P[3].y - t.P[1].y) * (t.P[3].y - t.P[1].y));
    d = sqrt(pr1 + pr2);

    if ((((a + b) <= c) || ((a + c) <= b) || ((b + c) <= a))) {
        printf("Error: invalid triangle\n");
        fprintf(f, "Error: invalid triangle\n");
    }
}

float perimeter_triangle(Triangle* t)
{
    float a, b, c, P;
    pr1 = ((t.P[1].x - t.P[2].x) * (t.P[1].x - t.P[2].x));
    pr2 = ((t.P[1].y - t.P[2].y) * (t.P[1].y - t.P[2].y));
    a = sqrt(pr1 + pr2);
    pr1 = ((t.P[2].x - t.P[3].x) * (t.P[2].x - t.P[3].x));
    pr2 = ((t.P[2].y - t.P[3].y) * (t.P[2].y - t.P[3].y));
    b = sqrt(pr1 + pr2);
    pr1 = ((t.P[3].x - t.P[1].x) * (t.P[3].x - t.P[1].x));
    pr2 = ((t.P[3].y - t.P[1].y) * (t.P[3].y - t.P[1].y));
    d = sqrt(pr1 + pr2);
    P = a + b + c;
    return P;
}

float area_triangle(Triangle* t)
{
    float a, b, c, P, S, p;
    pr1 = ((t.P[1].x - t.P[2].x) * (t.P[1].x - t.P[2].x));
    pr2 = ((t.P[1].y - t.P[2].y) * (t.P[1].y - t.P[2].y));
    a = sqrt(pr1 + pr2);
    pr1 = ((t.P[2].x - t.P[3].x) * (t.P[2].x - t.P[3].x));
    pr2 = ((t.P[2].y - t.P[3].y) * (t.P[2].y - t.P[3].y));
    b = sqrt(pr1 + pr2);
    pr1 = ((t.P[3].x - t.P[1].x) * (t.P[3].x - t.P[1].x));
    pr2 = ((t.P[3].y - t.P[1].y) * (t.P[3].y - t.P[1].y));
    d = sqrt(pr1 + pr2);
    p = P / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    return S;
}

void print_P_S_triangle(Triangle* t, float P, float S, FILE* f)
{
    fprintf(f, "Perimeter of triangle: %.2f\n", P);
    printf("Perimeter of triangle: %.2f\n", P);
    fprintf(f, "Area of triangle: %.2f\n", S);
    printf("Area of triangle: %.2f\n", S);
}
