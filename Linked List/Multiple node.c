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

    for(int i = 0; i < n; i++) {
        newnode = (node*)malloc(sizeof(node));

        if (newnode == NULL) {
            printf("Memory not allocated.\n");
            return 1;
        }

        printf("Enter element %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Display the list
    node *temp = head;
    printf("Linked list elements: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}
