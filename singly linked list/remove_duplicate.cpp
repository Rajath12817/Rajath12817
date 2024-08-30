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
 
void sort(struct node *p)
{
    struct node *q=NULL;
    q=p;
    while(p->next!=NULL)
    {
        p=p->next;
        if(p->data!=q->data)
        {
            q=p;
        }
        else
        {
            q->next=p->next;
            free(p);
            p=q;
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
    int a[]={1,2,2,3,3,4,4,5,5,5};
    create(a,10);
    sort(first);
    disp(first);
}