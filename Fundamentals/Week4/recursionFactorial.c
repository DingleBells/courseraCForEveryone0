/*  Computing Factorial Using Recursion
    Kanghee Cho
    January 9th 2021
*/

#include <stdio.h>

long int calculateFactorial(int n){
    if (n == 1){
        return 1;
    }
    else {
        return (calculateFactorial(n-1)*n);
    }
}


int main(void) {
    int fact = 0;
    printf("What number would you like to calculate the factorial of?: ");
    scanf("%d", &fact);
    printf("The factorial of %d is %ld.\n\n", fact, calculateFactorial(fact));
}