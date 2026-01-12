#include <stdio.h>

int counter = 0;

void TOH(int n, char src, char helper, char dest)
{
    if (n == 0)
        return;

    counter++;

    TOH(n - 1, src, dest, helper);
    printf("Shift disk %d from %c to %c\n", n, src, dest);
    TOH(n - 1, helper, src, dest);
}

int main()
{
    int n;

    printf("Enter the number of disks\n");
    scanf("%d", &n);

    TOH(n, 'A', 'C', 'B');

    printf("Total number of iterations required are: %d\n", counter);

    return 0;
}