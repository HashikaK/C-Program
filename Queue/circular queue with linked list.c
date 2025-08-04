#include <stdio.h>
#include <stdlib.h>

struct lnode{
    int data;
    struct lnode* next;
};
typedef struct lnode node;
typedef struct queue{
    node* front;
    node* rear;
}queue;

queue* createqueue(){
    struct queue* p=(queue*)malloc(sizeof(queue));
    p->front=NULL;
    p->rear=NULL;
    return p;
}
void enqueue(queue* q,int val){
    node* newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->next=NULL;
    if(q->rear==NULL){
        q->front=newnode;
    }
    else{
        q->rear->next=newnode;
    }
    q->rear=newnode;
    q->rear->next=q->front;
    printf("%d is enqueued\n",val);
}
    void dequeue(queue* q){
        if(q->front==NULL){
            printf("\nQueue is empty");
        }
        node* del=q->front;
        if(q->front==q->rear){
            q->rear=q->front=NULL;}
        else{
            q->front=q->front->next;
            q->rear->next=q->front;
        }
        int temp=del->data;
        free(del);
        printf("%d is dequeued\n",temp);
}
    int peek(queue* q){
        if(q->front==NULL){
            printf("\nQueue is empty");
        }
        else{
            printf("%d\n",q->front->data);
        }
    }
int main() {
    queue *q1=createqueue();
    queue *q2=createqueue();
    enqueue(q1,1);
    enqueue(q1,2);
    enqueue(q2,1);
    enqueue(q2,2);
    dequeue(q2);
    peek(q1);
    peek(q2);
    return 0;
    
}
