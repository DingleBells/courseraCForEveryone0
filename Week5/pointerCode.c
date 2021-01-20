/*  Use of pointers
    Kanghee Cho
    January 11th 2021
*/

#include <stdio.h>

int main(void) {
    const int size = 5;
    int grades[size] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
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
    printf("\n\n");

    printf("sum is at %p, or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
    printf("grades are at %lu to %lu\n", grades, grades + 5);
    printf("\n\n");
    return 0;
}