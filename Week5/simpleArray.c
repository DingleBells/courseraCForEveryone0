/*  Simple array to find a student's average grade
    Kanghee Cho
    January 10th 2021
*/

#include <stdio.h>

int main(void) {
    const int size = 5;
    int grades[size] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    int i;

    printf("\nmy grades are:\n");
    for (i=0;i < size;i++){
        printf("%d\t", grades[i]);
    }
    printf("\n\n");

    for (i=0; i < size; i++) {
        sum += grades[i];
    }
    printf("my average is %.2f\n\n", sum/size);
    return 0;
}