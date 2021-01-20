/*  Merge sort in C
    Kanghee Cho
    January 11th 2021
*/

#include <stdio.h>

void print_array(int how_many, int data[], char *str) {
    int i;
    printf("%s", str);

    for (i = 0; i < how_many; i++) {
        printf("%d\t", data[i]);
    }
}


void merge(int a[], int b[], int c[], int howMany){
    int i = 0, j = 0, k = 0;
    
    while (i < howMany && j < howMany) {
        if (a[i] < b[j]){
            c[k++] = a[i++];
        }
        else {
            c[k++] = b[j++];
        }
    }
    while (i < howMany) {
        c[k++] = a[i++];
    }
    while (j < howMany) {
        c[k++] = b[j++];
    }
}

int main(void) {
    const int size = 5;
    int a[size] = {1, 8, 10, 16, 17};
    int b[size] = {2,3,4,5,6};
    int c[2*size];
    print_array(size, a, "My grades \n");
    printf("\n\n");
    print_array(size, b, "More grades\n");
    printf("\n\n");
    merge(a,b,c,size);
    print_array(2*size, c, "My sorted array\n");
    printf("\n\n");
    return 0;
}