#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;

};

void create(struct queue *q,int size)
{
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}


void enqueue(struct queue *q,int x)
{
    if(q->rear==q->size)
    {
        printf("Queue is Full\n");

    }
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}  

int dequeue(struct queue *q)
{
    int x=-1;
    if(q->rear==q->front)
    {
        printf("Queue is empty\n");

    }
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}   

void disp(struct queue *q)
{
    if(q->front==q->rear)
    {
        printf("NULL\n");
    }
    else
    {
        
        for(int i=q->front+1;i<=q->rear;i++)
        {
            printf("%d ",q->Q[i]);
        }
        printf("\n");
    }
}

int main()
{
    struct queue q;
    create(&q,5);
    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    enqueue(&q,15);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    disp(&q);

}