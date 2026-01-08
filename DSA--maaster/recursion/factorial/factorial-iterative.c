// #include <stdio.h>

// int main()
// {
//     int n, fact = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     printf("Factorial = %d", fact);

//     return 0;
// }


//with execution time
#include <stdio.h>
#include <time.h>

int main()
{
    int n, fact = 1;
    clock_t start, end;
    double time_taken;

    printf("Enter a number: ");
    scanf("%d", &n);

    start = clock();   // start time

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    end = clock();     // end time

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Factorial = %lld\n", fact);
    printf("Execution Time = %f seconds\n", time_taken);

    return 0;
}
