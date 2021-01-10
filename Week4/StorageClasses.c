/*  Storage Class
    Kanghee Cho
    January 8 2021
    Not very useful code
*/

#include <stdio.h>

extern int reps = 0; //This variable can be used in any level of nested thingies

void f(void) {
    static int called = 0; //Starts at 0 but changes to whatever it was at last exit
    printf("f called %d\n", called);
    called++;
    reps += called;
}

int main(void) {
    const int Limit = 10; //Limit cannot be changed because of const, kinda like let in swift
    for (int i = 1; i < Limit; i++){
        printf("i local = %d, reps global = %d\n", i, reps);
        f();
    }
    return 0;
}