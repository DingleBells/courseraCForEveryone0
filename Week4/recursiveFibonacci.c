/*  Recursive fibonacci
    Kanghee Cho
    January 9th 2021
*/

#include <stdio.h>
long fibonacci(int n) {
    if (n<=1){
        return n;
    }
    else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main(void) {
    int fib = 0;
    printf("What number would you like to find the fibonacci of?:");
    scanf("%d", &fib);
    printf("The fibonacci of %d is %ld. \n\n", fib, fibonacci(fib));
    return 0;
}