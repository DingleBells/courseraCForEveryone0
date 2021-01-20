/*  Sum of numbers from 1 to n
    Kanghee Cho
    January 9th 2021
*/

#include <stdio.h>

int findSumToN(int n){
    return ((n*(n-1))/2);
};

int main(void){
    int number;
    printf("What number would you like to add to?: ");
    scanf("%d", &number);
    printf("The sum of the numbers to %d is %d.\n",number, findSumToN(number));
    return 0;
}