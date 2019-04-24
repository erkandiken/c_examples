#include <stdio.h>

double circularArea(double r);

int main()
{
    double radius = 1.0, area= 0.0;
    area = circularArea(radius);
    printf("radius: %f, area: %f\n", radius, area);

    radius = 5.0;
    area = circularArea(radius);
    printf("radius: %f, area: %f\n", radius, area);

    return 0;
}

double circularArea(double r){
    const double pi = 3.14159;
    return pi * r * r;
}