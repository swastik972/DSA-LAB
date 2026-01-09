#include <stdio.h>

// Binary search function that returns index if found, -1 if not found
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if target is at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // If target is greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }
    
    // Element not found
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // Search for a number that exists
    int target1 = 23;
    int result1 = binarySearch(arr, size, target1);
    if (result1 != -1) {
        printf("Number %d found at index %d\n", target1, result1);
    } else {
        printf("Number %d NOT found in the array\n", target1);
    }
    
    // Search for a number that does NOT exist
    int target2 = 25;
    int result2 = binarySearch(arr, size, target2);
    if (result2 != -1) {
        printf("Number %d found at index %d\n", target2, result2);
    } else {
        printf("Number %d NOT found in the array\n", target2);
    }
    
    // Another number that doesn't exist
    int target3 = 100;
    int result3 = binarySearch(arr, size, target3);
    if (result3 != -1) {
        printf("Number %d found at index %d\n", target3, result3);
    } else {
        printf("Number %d NOT found in the array\n", target3);
    }
    
    // Number smaller than all elements
    int target4 = 1;
    int result4 = binarySearch(arr, size, target4);
    if (result4 != -1) {
        printf("Number %d found at index %d\n", target4, result4);
    } else {
        printf("Number %d NOT found in the array\n", target4);
    }
    
    return 0;
}