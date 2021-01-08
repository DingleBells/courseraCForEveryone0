/* 
    Miles and yards converted to kilometers
    Kanghee Cho
    January 4 2021
*/ 
#include <stdio.h>

int main(void) {
    float miles, yards;
    double kilometers;
    printf("Enter miles and yards, seperated by a space: ");
    scanf("%f %f", &miles, &yards);
    kilometers = 1.609344 * (miles+yards / 1760.0);
    printf("\nIt is %lf kilometers.\n\n", kilometers);
    return 0;
}