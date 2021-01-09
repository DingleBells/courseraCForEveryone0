/*  Count blanks, digits, and total characters
    Demonstrate for loop
    Kanghee Cho
    January 8th 2021
*/

#include <stdio.h>

int main(void) {
    int blanks = 0, digits = 0, total_chars = 0;
    int c;  // Use fo rint value of character
    for (; (c =  getchar()) != EOF; total_chars++) {
        if (c == ' '){
            ++blanks;
        }
        else if (c >= '0' && c <= '9') {
            ++digits;
        }
        ++total_chars;
    }
    printf("blanks = %d, digits = %d, total chars = %d\n\n", 
           blanks, digits, total_chars);
    return 0;
}