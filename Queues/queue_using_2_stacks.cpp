#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
}*top1=NULL,*top2=NULL;

void enqueue(struct node **p,int x)
{
    struct node *t=(struct node *)malloc(sizeof(struct node));
    if(t==NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        t->data=x;
        t->next=*p;
        *p=t;
    }
}


int dequeue()
{
    int x=-1;
    if(top2!=NULL)
    {
        x=top2->data;
        top2=top2->next;
        return x;
    }
    else
    {
        
        while(top1!=NULL)
        {
            enqueue(&top2,top1->data);
            top1=top1->next;
        }
        return dequeue();
    }
    
}

// void display(struct node *p)
// {
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
// }

int main()
{
    enqueue(&top1,10);
    enqueue(&top1,20);
    enqueue(&top1,30);
    enqueue(&top1,40);
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    enqueue(&top1,50);
    printf("%d ",dequeue());
    enqueue(&top1,60);
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    // display(top1);
}