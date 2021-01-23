/*  Simple program using asserts
    Kanghee Cho
    January 20th 2021
*/

#define NDEBUG // goes before <assert.h>, turns off asserts
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    assert(0);
    printf("My program runs\n");
    return 0;
}