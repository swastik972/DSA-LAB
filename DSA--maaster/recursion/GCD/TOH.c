// #include <stdio.h>

// int counter = 0;

// void TOH(int n, char src, char helper, char dest)
// {
//     if (n == 0)
//         return;

//     counter++;

//     TOH(n - 1, src, dest, helper);
//     printf("Shift disk %d from %c to %c\n", n, src, dest);
//     TOH(n - 1, helper, src, dest);
// }

// int main()
// {
//     int n;

//     printf("Enter the number of disks\n");
//     scanf("%d", &n);

//     TOH(n, 'A', 'C', 'B');

//     printf("Total number of iterations required are: %d\n", counter);

//     return 0;
// }


// #include <stdio.h>

// // Function to solve Tower of Hanoi
// void toh(int n, char source, char auxiliary, char destination) {
//     // Base case
//     if (n == 1) {
//         printf("Move disk 1 from %c to %c\n", source, destination);
//         return;
//     }

//     // Move n-1 disks from source to auxiliary
//     toh(n - 1, source, destination, auxiliary);

//     // Move the nth disk from source to destination
//     printf("Move disk %d from %c to %c\n", n, source, destination);

//     // Move n-1 disks from auxiliary to destination
//     toh(n - 1, auxiliary, source, destination);
// }

// int main() {
//     int n;

//     printf("Enter number of disks: ");
//     scanf("%d", &n);

//     // A = source, B = auxiliary, C = destination
//     toh(n, 'A', 'B', 'C');

//     return 0;
// }


#include <stdio.h>

// Counter to track moves
int count = 0;

// TOH with order: n, destination, source, auxiliary
void toh(int n, char dest, char src, char aux) {
    if (n == 0) {
        return;
    }

    // Step 1: Move n-1 disks from Source to Auxiliary
    // (In this call: src is src, aux becomes the new destination, dest is the helper)
    toh(n - 1, aux, src, dest);

    // Step 2: Move the actual disk
    count++;
    printf("Move %d: Disk %d from %c to %c\n", count, n, src, dest);

    // Step 3: Move n-1 disks from Auxiliary to Destination
    // (In this call: aux is now the source, dest is dest, src is the helper)
    toh(n - 1, dest, aux, src);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    // Calling with rods labeled 'C' (Dest), 'A' (Src), 'B' (Aux)
    toh(4, 'A', 'B', 'C');

    printf("\nTotal steps: %d\n", count);
    return 0;
}