#include <stdio.h>

#define MAX 5  // Maximum size of the stack

// --- Global Variables (The Stack) ---
int stack[MAX];
int top = -1;  // -1 indicates the stack is empty

// --- Function Definitions ---
// Function to add an element
void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Function to remove an element
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

// Function to display the stack content
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Current Stack elements: ");
        // Loop from top down to 0 to show LIFO order
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    // 1. Push elements
    push(10);
    push(20);
    push(30);
    
    display(); // Output: 30 20 10

    // 2. Pop elements
    pop();     // Removes 30
    pop();     // Removes 20

    display(); // Output: 10

    // 3. Test Underflow
    pop();     // Removes 10
    pop();     // Tries to remove from empty stack (Underflow)

    return 0;
}