#include "biblioteca.h"
#include <stdio.h>

int main()
{
    float R;
    scanf("%f", &R);
    printf("Area: %.2f\n", calcula_area(R));
    printf("Volume: %.2f", calcula_volume(R));
}