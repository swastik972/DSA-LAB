#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Insert at the beginning
struct Node* insertAtBeginning(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

// Insert at the end
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Delete a node by value
struct Node* deleteNode(struct Node* head, int value) {
    struct Node* temp = head;
    struct Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return head;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value not found\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);
    return head;
}

// Display the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\n1. Insert at beginning");
        printf("\n2. Insert at end");
        printf("\n3. Delete a value");
        printf("\n4. Display list");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                head = insertAtBeginning(head, value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                head = insertAtEnd(head, value);
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                head = deleteNode(head, value);
                break;

            case 4:
                displayList(head);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
