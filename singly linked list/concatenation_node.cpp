#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL,*last;

struct node * create(struct node *p,int a[],int n)
{
    struct node *t;
    struct node *last;
    p=(struct node *)malloc(sizeof(struct node));
    p->data=a[0];
    p->next=NULL;
    last=p;
    for(int i=1;i<n;i++)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
    return p;
}

// void create2(int b[],int n)
// {
//     struct node *t;
//     struct node *last;
//     second=(struct node *)malloc(sizeof(struct node));
//     second->data=b[0];
//     second->next=NULL;
//     last=second;
//     for(int i=1;i<n;i++)
//     {
//         t=(struct node *)malloc(sizeof(struct node));
//         t->data=b[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;

//     }
// }

void concat(struct node *p,struct node *q)
{
    third=p;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=q;

    
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
    int b[]={6,7,8,9,10};
    first=create(first,a,5);
    second=create(second,b,5);
    concat(second,first);
    disp(third);
}