#include <stdio.h>
#define SIZE 5  // Maximum size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Check if the queue is empty
int isEmpty() {
    return front == -1 || front > rear;
}

// Add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty()) {
        front = 0;  // First element
    }
    rear++;
    queue[rear] = value;
    printf("%d enqueued\n", value);
}

// Remove an element from the queue
void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("%d dequeued\n", queue[front]);
    front++;
}

// Display the queue elements
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60); // This will show "Queue is full" because size is 5
    display();

    return 0;
}
