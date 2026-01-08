#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
int isEmpty() {
return (top == -1);
}
int size() {
return top + 1;
}
void push() {
int value;
if (top == MAX - 1) {
printf("Stack Overflow! Cannot push.\n");
} else {
printf("Enter element to push: ");
scanf("%d", &value);
top++;
stack[top] = value;
printf("%d pushed into stack.\n", value);
}
}
void pop() {
if (isEmpty()) {
printf("Stack Underflow! Cannot pop.\n");
} else {
printf("%d popped from stack.\n", stack[top]);
top--;
}
}
void peek() {
if (isEmpty()) {
printf("Stack is empty.\n");
} else {
printf("Top element is %d\n", stack[top]);
}
}
int main() {
int choice;
do {
printf("\n--- MAIN MENU ---\n");
printf("1. Push\n");
printf("2. Pop\n");
printf("3. Peek\n");
printf("4. isEmpty\n");
printf("5. Size\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
push();
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
if (isEmpty())
printf("Stack is empty.\n");
else
printf("Stack is not empty.\n");
break;
case 5:
printf("Stack size is %d\n", size());
break;
case 6:
printf("Exiting program...\n");
break;
default:
printf("Invalid choice! Try again.\n");
}
} while (choice != 6);
return 0;
}