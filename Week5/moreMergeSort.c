/*  Sorting: Merge sort -size is a power of 2
    O(n log n) efficient
    Kanghee Cho January 11th 2021
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

void mergesort(int key[], int howMany) /* A power of 2*/ {
    int j, k;
    int w[howMany];

    for (k=1; k<howMany; k *= 2){
        for (j = 0; j < howMany-k; j+= 2 *k){
                merge(key+j, key+j+k, w+j, k);
        }
        for (j=0; j < howMany; j++) {
            key[j] = w[j];
        }
    }
}

int main(void) {
    const int size = 8;
    int a[size] = {5,8,7,1,3,4,2,6};
    print_array(size, a, "Numbers\n");
    printf("\n\n");
    mergesort(a, size);
    print_array(size, a, "Sorted numbers\n");
    printf("\n\n");
    return 0;

}