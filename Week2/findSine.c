/*  Finding Sine of Input Float
    January 4 2021
*/

#include <stdio.h>
#include <math.h> // Necessary library for sin() function

int main(void) {
    double inVal, result;
    printf("Enter number 0 < number < 1: ");
    scanf("%lf", &inVal);
    result = sin(inVal);
    printf("The sine of %lf is %lf\n", inVal, result);
    return 0;
}