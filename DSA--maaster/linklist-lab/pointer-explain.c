#include <stdio.h>

int main() {
    int num = 100;
    
    int *p1 = &num;        // Single Pointer: stores address of 'num'
    int **p2 = &p1;       // Double Pointer: stores address of 'p1'
    int ***p3 = &p2;      // Triple Pointer: stores address of 'p2'

    printf("Values via Dereferencing:\n");
    printf("Value of num: %d\n", num);
    printf("Value via p1 (*p1): %d\n", *p1);
    printf("Value via p2 (**p2): %d\n", **p2);
    printf("Value via p3 (***p3): %d\n", ***p3);

    printf("\nAddresses Stored:\n");
    printf("Address of num: %p\n", (void*)&num);
    printf("Value inside p1: %p\n", (void*)p1);
    printf("Value inside p2: %p\n", (void*)p2);
    printf("Value inside p3: %p\n", (void*)p3);

    return 0;
}