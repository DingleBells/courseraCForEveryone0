/*  Finding the sine and cosine of numbers between 0 and 1
    January 8 2021
*/

#include <stdio.h>
#include <math.h> // sine and cosine functions here

int main(void) {
    printf("Number:    Sine:       Cosine:     \n"); // top label for table
    double cur_number = 0.0;
    for (cur_number; cur_number <1.0;) {
        double cur_sine = sin(cur_number), cur_cosine = cos(cur_number);//calculate sine and cosine
        printf("%lf   %lf    %lf\n", cur_number, cur_sine, cur_cosine);//print the values
        cur_number += 0.1; // increment so we don't get stuck in infinite loop
    }
    return 0;
}