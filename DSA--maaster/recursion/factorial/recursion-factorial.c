#include <stdio.h>
#include <time.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    clock_t start, end;
    double time_taken;

    printf("Enter a number: ");
    scanf("%d", &n);

    start = clock();   // start time

    int result = factorial(n);

    end = clock();     // end time

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Factorial = %lld\n", result);
    printf("Execution Time = %f seconds\n", time_taken);

    return 0;
}