#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
}*first=NULL,*last=NULL;

void create(int a[],int n)
{
    struct node *t;
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
 
int sort(struct node *p)
{
    int x=-37689;
    while(p!=NULL)
    {
        if(p->data<x)
        {
            return 0;
        }
        else
        {
            x=p->data;
            p=p->next;

        }
    }
    return 1;
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
    int a[]={1,2,3,5,4};
    create(a,5);
    if(sort(first))
    {
        printf("Sorted ");
    }
    else
    {
        printf("Not sorted");
    }
    disp(first);
}