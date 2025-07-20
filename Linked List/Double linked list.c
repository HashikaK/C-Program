#include <stdio.h>
#include <stdlib.h>

// Define the doubly linked list node structure
struct dnode {
    int data;
    struct dnode *prev;
    struct dnode *next;
};
typedef struct dnode node;

int main() {
    node *head = NULL, *tail = NULL;
    node *newnode, *temp;

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        newnode = (node*)malloc(sizeof(node));

        if(newnode == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }

        scanf("%d", &newnode->data);
        newnode->prev = NULL;
        newnode->next = NULL;

        if(head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    // Display the list in forward direction
    temp = head;
    printf("Doubly Linked List (Forward): ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    // Optional: Display the list in reverse direction
    temp = tail;
    printf("\nDoubly Linked List (Backward): ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
    return 0;
}
