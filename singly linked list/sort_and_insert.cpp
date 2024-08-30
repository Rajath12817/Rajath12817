#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int a[],int n)
{
    struct node *t,*last;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}

void sortin(struct node *p,int x)
{
    struct node *t=NULL,*q=NULL;
    t=(struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->next=NULL;

    if(first==NULL)
    {
        first=t;
    }
    else
    {
        while(p&& p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=p;
            q->next=t;
        }
    }
}

void disp(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}


int main()
{
    int a[]={1,2,3,4,6};
    create(a,5);
    sortin(first,5);
    disp(first);
}