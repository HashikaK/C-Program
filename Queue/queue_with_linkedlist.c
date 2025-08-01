#include <stdio.h>
#include <stdlib.h>
#define n 30
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
    printf("%d is enqueued\n",val);
}
    void dequeue(queue* q){
        if(q->front==NULL){
            printf("\nQueue is empty");
        }
        node* del=q->front;
        q->front=q->front->next;
        if(q->front==NULL)
            q->rear=NULL;
        int temp=del->data;
        free(del);
        printf("%d is dequeued\n",temp);
}
        /* dequeue instead of else block
        for(int i=0;i<rear;i++){
            q->arr[i]=q->arr[i+1];}
            (q->rear);
        */
    
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
    dequeue(q2);
    peek(q1);
    peek(q2);
    return 0;
    
}
