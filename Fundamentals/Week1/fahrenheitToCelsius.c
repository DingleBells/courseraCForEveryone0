/*  Fahrenheit to Celsius
    Kanghee Cho
    January 4, 2021
*/

#include <stdio.h>
int main(void) {
    double fahrenheit, celsius;
    printf("Temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit-32.0)*(5.0/9.0);
    printf("%f degrees Fahrenheit is %f degrees Celsius.\n",fahrenheit, celsius);
    return 0;
}