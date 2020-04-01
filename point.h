#include <stdio.h>
typedef struct point {
    int x;
    int y;
} point_t;

typedef struct circle {
    point_t A;
    int R;
} Circle;

typedef struct triangle {
    point_t P[4];
} Triangle;

void Vvod_Koordinat_cirlce(Circle* c);
void print_cirlce(Circle* c, FILE* f);
void Vvod_Koordinat_triangle(Triangle* t);
void print_triangle(Triangle* t, FILE* f);
float area_circle(Circle* c);
float perimeter_circle(Circle* c);
void print_P_S_circle(Circle* c, float P, float S, FILE* f);