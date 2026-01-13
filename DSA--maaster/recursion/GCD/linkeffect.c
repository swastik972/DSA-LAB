#include <stdio.h>
#include <time.h>

// Iterative Euclidean Algorithm
int findGCD_Iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Recursive Euclidean Algorithm
int findGCD_Recursive(int a, int b) {
    if (b == 0)
        return a;
    return findGCD_Recursive(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;

    // Convert to absolute values
    int a = num1 < 0 ? -num1 : num1;
    int b = num2 < 0 ? -num2 : num2;

    clock_t start, end;
    double time_iter, time_rec;

    // Time for Iterative method
    start = clock();
    int gcd_iter = findGCD_Iterative(a, b);
    end = clock();
    time_iter = (double)(end - start) / CLOCKS_PER_SEC;

    // Time for Recursive method
    start = clock();
    int gcd_rec = findGCD_Recursive(a, b);
    end = clock();
    time_rec = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Numbers: %d and %d\n", num1, num2);
    printf("GCD using Iterative Method: %d\n", gcd_iter);
    printf("Time taken (Iterative): %f seconds\n", time_iter);

    printf("GCD using Recursive Method: %d\n", gcd_rec);
    printf("Time taken (Recursive): %f seconds\n", time_rec);

    printf("Time Difference: %f seconds\n", time_rec - time_iter);

    return 0;
}
