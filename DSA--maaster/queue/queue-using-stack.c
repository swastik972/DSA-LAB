#include <stdio.h>

#define MAX 5

int s1[MAX], s2[MAX];
int top1 = -1, top2 = -1;

/* Stack operations */
void push1(int x) {
    if (top1 == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s1[++top1] = x;
}

void push2(int x) {
    if (top2 == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    s2[++top2] = x;
}

int pop1() {
    return s1[top1--];
}

int pop2() {
    return s2[top2--];
}

/* Queue operations */
void enqueue(int x) {
    push1(x);
    printf("%d enqueued\n", x);
}

void dequeue() {
    int i;
    if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return;
    }

    if (top2 == -1) {
        while (top1 != -1) {
            push2(pop1());
        }
    }
    printf("%d dequeued\n", pop2());
}

/* Main function */
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    enqueue(40);
    dequeue();

    return 0;
}