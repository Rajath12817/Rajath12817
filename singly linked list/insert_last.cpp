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
 
void insert(int ele)
{
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=ele;
    q->next=NULL;
    if(first==NULL)
    {
        first=last=q;
    }
    else
    {
        
        last->next=q;
        last=q;
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
    int a[]={1,2,3,4,5};
    create(a,5);
    insert(28);
    disp(first);
}