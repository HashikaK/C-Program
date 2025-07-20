#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode *next;
};

typedef struct lnode node;

int main() {
    node *head = NULL, *tail = NULL;
    node *newnode;
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
        newnode->next = NULL;

        if(head == NULL) {
            head = tail = newnode;
            newnode->next = head;  // circular link to self for first node
        } else {
            tail->next = newnode;
            tail = newnode;
            tail->next = head;  // maintain circular link
        }
    }

    // Display the circular linked list
    if(head == NULL) {
        printf("List is empty\n");
    } else {
        node *temp = head;
        printf("Circular Linked List: ");
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while(temp != head);
        printf("\n");
    }
    return 0;
}
