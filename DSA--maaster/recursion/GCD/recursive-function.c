#include <stdio.h>

// Recursive function to find GCD
int findGCD(int a, int b) {
    // Base case: if b is 0, the GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive step: call the function with (b, a % b)
    return findGCD(b, a % b);
}

int main() {
    int num1 = 48, num2 = 18;
    
    // It's good practice to pass absolute values
    int result = findGCD(num1, num2);
    
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    
    return 0;
}