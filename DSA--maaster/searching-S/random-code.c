#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // Initialize random number generator
    srand(time(0));

    // Fill the array with random integers
    for (int i = 0; i < n; i++) {
        arr[i] = rand(); // random integer
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
