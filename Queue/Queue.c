#include <stdio.h>
#include <stdlib.h>
#define n 30

struct queue{
    int arr[n],front,rear;
};
typedef struct queue queue;
queue* createqueue(){
    struct queue* p=(queue*)malloc(sizeof(queue));
    p->front=-1;
    p->rear=-1;
    return p;
}
void enqueue(queue* q,int val){
    if(q->rear==n-1){
        printf("Queue is full");
        return;
    }
    if(q->front==-1){
        q->front++;
        q->arr[++(q->rear)]=val;
        printf("%d is enqueued\n",val);
    }}
    int dequeue(queue* q){
        if(q->front==-1 || q->front>q->rear){
            printf("\nQueue is empty");
        }
        else{
            printf("%d is dequeued\n",q->arr[q->front]);
            (q->front)++;
        }}
        /* dequeue instead of else block
        for(int i=0;i<rear;i++){
            q->arr[i]=q->arr[i+1];}
            (q->rear);
        */
    
    int peek(queue* q){
        if(q->front==1 || q->front>q->rear){
            printf("\nQueue is empty");
        }
        else{
            printf("%d\n",q->arr[q->front]);
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
