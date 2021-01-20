/*  Use f Simple arrays as parameters
    Sorting Bubble Sort
    Display each loop
    Easy but inefficient
    Kanghee Cho January 11th 2021
*/

#include <stdio.h>

void swap(int *a, int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

void print_array(int how_many, int data[], char *str) {
    int i;
    printf("%s", str);

    for (i = 0; i < how_many; i++) {
        printf("%d\t", data[i]);
    }
}

void bubbleSort(int data[], int how_many){
    int i, j;
    int go_on;

    for(i=0; i < how_many; i++){
        print_array(how_many, data, "\nInside bubble\n");
        printf("i = %d, input any int to continue:", i);
        scanf("%d", &go_on);
        for(j = how_many-1; j > i; j--){
            if (data[j-1] > data[j]){
                swap(&data[j-1], &data[j]);
            }
        }
    }
}

int main(void) {
    const int size = 5;
    int grades[size] = {92, 88, 83, 78, 67};

    print_array(size, grades, "My grades\n");
    printf("\n\n");
    bubbleSort(grades, size);
    print_array(size, grades, "My sorted grades\n");
    printf("\n\n");
    return 0;
}