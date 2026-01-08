#include <stdio.h>
#include <time.h>

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    clock_t start, end;
    double time_taken;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    start = clock(); // start time

    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    end = clock(); // end time

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nExecution Time = %f seconds\n", time_taken);

    return 0;
}