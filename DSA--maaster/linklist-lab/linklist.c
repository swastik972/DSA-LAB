#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a linked list of size n
void create_linklist(struct Node** head, int n) {
    struct Node *newNode, *temp;
    int data, i;

    if (n <= 0) {
        *head = NULL;
        return;
    }
    
    for (i = 1; i <= n; i++) {
        // Allocate memory for a new node
        newNode = (struct Node*)malloc(sizeof(struct Node));
        
        // printf("Enter data for node %d: ", i);
        // scanf("%d", &data);
        
        newNode->data = i;
        newNode->next = NULL;

        // If it's the first node, set it as head
        if (*head == NULL) {
            *head = newNode;
            temp = *head;
        } else {
            // Link the new node to the end of the list
            temp->next = newNode;
            temp = temp->next;
        }
    }

}

// Helper function to print the list
void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("\nLinked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert a node at the front
void insertfront(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

int main() {
    struct Node* head = NULL;
    int n;

    printf("Enter the number of nodes (n): ");
    scanf("%d", &n);

    // Call the function with address of head and n
    create_linklist(&head, n);
    displayList(head);
    insertfront(&head, 40);
    displayList(head);

    return 0;
}