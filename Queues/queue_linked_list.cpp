#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;


void enqueue(int x)
{
    struct node *t;
    t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("Queue is full");

    }
    else
    {
        t->data=x;
        t->next=NULL;
        if(front == NULL)
        {
            front =rear=t;
        }
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue()
{
    int x=-1;
    struct node *p=front;
    if(front == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        x=front->data;
        front=front->next;
        free(p);
    }
    return x;
}

void disp()
{
    struct node *p=front;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(15);
    enqueue(14);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    disp();
}