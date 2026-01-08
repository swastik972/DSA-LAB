#include <stdio.h>
#include <time.h>

int main()
{
    int n, a = 0, b = 1, c;
    clock_t start, end;
    double time_taken;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    start = clock();   // start time

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    end = clock();     // end time

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nExecution Time = %f seconds\n", time_taken);

    return 0;
}