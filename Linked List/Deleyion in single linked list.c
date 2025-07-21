#include <stdio.h>
#include <stdlib.h>

struct lnode {
    int data;
    struct lnode *next;
};
typedef struct lnode node;

int main() {
    node *head = NULL, *tail = NULL, *previous;
    node* newnode;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        newnode = (node*)malloc(sizeof(node));
        int value;
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;  

        if(head == NULL) {
            head = previous = newnode;
        } else {
            previous->next = newnode;
            previous = newnode;
        }
        tail = newnode;
    }

    int index;
    printf("Enter the index to delete (1-based): ");
    scanf("%d", &index);

    node *prev, *nextnode, *temp = head;

    // Deletion at beginning
    if(index == 1) {
        temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    // Deletion at end
    else if(index == n) {
        for(int i = 1; i < n - 1; i++) {
            temp = temp->next;
        }
        nextnode = temp->next;
        temp->next = NULL;
        free(nextnode);
    }
    // Deletion in middle
    else if(index > 1 && index < n) {
        temp = head;
        for(int i = 1; i < index - 1; i++) {
            temp = temp->next;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        free(nextnode);
    }
    else {
        printf("Invalid index.\n");
    }

    // Display updated list
    temp = head;
    printf("Updated list: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next; 
    }
    printf("\n");

    return 0;
}
