/*
    Circle and Ar ea
    Kanghee Cho
    January 4, 2021
*/

#include <stdio.h>

#define PI 3.14159

int main() {
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("radius of %lf meters; area is %lf square meters\n", radius, area);
    return 0;
}