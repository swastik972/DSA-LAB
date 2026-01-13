//iterative Euclidean Algorithm

#include <stdio.h>

// Function to find GCD using the iterative Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Using the absolute value ensures the logic works for negative numbers
    int result = findGCD(num1 < 0 ? -num1 : num1, num2 < 0 ? -num2 : num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

