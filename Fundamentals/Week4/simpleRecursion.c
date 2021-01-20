/*  Simple Recursion Program
    Kanghee Cho
    January 9th 2021
*/

#include <stdio.h>

void recursiveCountdown(int n) {
    if (n == 0){
        printf("blast off!");
    } else {
    printf("time is %d\n", n);
    recursiveCountdown(n-1);
    }
}

int main(void) {
    int counting;
    printf("What number would you like to count down from?:");
    scanf("%d", &counting);
    recursiveCountdown(counting);
    return 0;
}