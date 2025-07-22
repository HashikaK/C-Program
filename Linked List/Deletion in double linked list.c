#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode *prev;
    struct lnode *next;
};

typedef struct lnode node;

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

    // Deletion
    int pos;
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position.\n");
    } else {
        temp = head;
        // Traverse to the node at position
        for (int i = 1; i < pos; i++) {
            temp = temp->next;
        }

        // deleting at beginning
        if (temp == head) {
            head = head->next;
            if (head != NULL)
                head->prev = NULL;
            else
                tail = NULL; 
        }
        // deleting at the last
        else if (temp == tail) {
            tail = tail->prev;
            tail->next = NULL;
        }
        // deleting at the middle
        else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        free(temp);
        n--; 
    }
    //list in forward direction
    temp = head;
    printf("Doubly Linked List (Forward): ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    //  in reverse direction
    temp = tail;
    printf("\nDoubly Linked List (Backward): ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }

    printf("\n");

    return 0;
}

