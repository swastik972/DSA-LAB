#include <stdio.h>
#include <time.h>

// Non-tail recursive sum function
int sum(int n)
{
    if(n == 1) {
        return n;
    }
    return n + sum(n - 1);
}

// Tail recursive sum function
int sum_tail(int n, int running_sum)
{
    if(n == 1) {
        return running_sum + 1;
    }
    return sum_tail(n - 1, running_sum + n);
}

// Iterative sum function
int sum_iterative(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main()
{
    int n = 10000;
    clock_t start, end;
    double time_taken;
    int result;
    
    printf("\n");
    printf("=================================================================\n");
    printf("| %-25s | %-10s | %-18s |\n", "Method", "Result", "Time (seconds)");
    printf("=================================================================\n");
    
    // Non-tail recursion
    start = clock();
    result = sum(n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("| %-25s | %-10d | %-18.10f |\n", "Non-tail Recursion", result, time_taken);
    
    // Tail recursion
    start = clock();
    result = sum_tail(n, 0);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("| %-25s | %-10d | %-18.10f |\n", "Tail Recursion", result, time_taken);
    
    // Iterative
    start = clock();
    result = sum_iterative(n);
    end = clock();
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("| %-25s | %-10d | %-18.10f |\n", "Iterative", result, time_taken);
    
    printf("=================================================================\n");
    printf("\n");
    
    return 0;
}