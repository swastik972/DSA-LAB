#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = NULL, *temp = NULL, *newNode = NULL;

    for (int i = 1; i <= 100; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = i;      // sample data
        newNode->link = NULL;

        if (head == NULL) {
            head = newNode;     // first node
            temp = head;
        } else {
            temp->link = newNode;
            temp = newNode;
        }
    }

    // Display the list
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    printf("NULL");

    return 0;
}