#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int n = 0;  // Number of elements in the queue

// Insert an element into the priority queue
void enqueue(int value) {
    if (n == SIZE) {
        printf("Queue is full!\n");
        return;
    }
    int i = n - 1;
    // Shift elements to make space based on priority
    while (i >= 0 && queue[i] < value) { 
        queue[i + 1] = queue[i];
        i--;
    }
    queue[i + 1] = value;
    n++;
    printf("%d enqueued\n", value);
}

// Remove the highest priority element
void dequeue() {
    if (n == 0) {
        printf("Queue is empty!\n");
        return;
    }
    printf("%d dequeued\n", queue[0]); // Front element has highest priority
    for (int i = 1; i < n; i++) {
        queue[i - 1] = queue[i];
    }
    n--;
}

// Display the queue
void display() {
    if (n == 0) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(30);
    enqueue(50);
    enqueue(20);
    enqueue(40);
    display();

    dequeue();
    display();

    enqueue(60);
    display();

    return 0;
}
