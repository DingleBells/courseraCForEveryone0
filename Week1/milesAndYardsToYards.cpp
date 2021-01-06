/*  Miles and Yards to yards
    Kanghee cho
    January 4 2021
*/
#include <stdio.h>

int main(void){
    double miles, inyards, yards;

    printf("Miles and Yards: ");
    scanf("%lf %lf", &miles, &inyards);
    yards = inyards + miles*1760.0;
    printf("%f yards\n", yards);
    return 0;
}