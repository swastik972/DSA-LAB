#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Linear search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Binary search function (array must be sorted)
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    srand(time(0));

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // numbers 0-99
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the number to search: ");
    scanf("%d", &key);

    // Linear search with time measurement
    clock_t start = clock();
    int linearIndex = linearSearch(arr, n, key);
    clock_t end = clock();
    double linearTime = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (linearIndex != -1)
        printf("Linear Search: %d found at index %d\n", key, linearIndex);
    else
        printf("Linear Search: %d not found\n", key);
    printf("Time taken by Linear Search: %f seconds\n", linearTime);

    // Sort array for binary search
    bubbleSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    // Binary search with time measurement
    start = clock();
    int binaryIndex = binarySearch(arr, n, key);
    end = clock();
    double binaryTime = ((double)(end - start)) / CLOCKS_PER_SEC;

    if (binaryIndex != -1)
        printf("Binary Search: %d found at index %d\n", key, binaryIndex);
    else
        printf("Binary Search: %d not found\n", key);
    printf("Time taken by Binary Search: %f seconds\n", binaryTime);

    return 0;
}
