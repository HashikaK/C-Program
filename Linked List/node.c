#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode *next;
};

typedef struct lnode node;

int main() {
    node *head = NULL;

    // Allocate memory for one node
    node *newnode = (node*)malloc(sizeof(node));
    
    if (newnode == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter the element: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;
    head = newnode;

    // Display the node
    printf("Single node in the list: %d\n", head->data);

    return 0;
}

