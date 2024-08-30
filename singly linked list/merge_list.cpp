#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;

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

void merge(struct node *p,struct node *q)
{
    struct node *last=NULL;
    if(p->data<q->data)
    {
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else
    {
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL)
    {
        if(p->data<q->data)
        {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else
        {
            
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
            
        }   
    }
    if(p!=NULL)
    {
        last->next=p;
    }
    if(q!=NULL)
    {
        last->next=q;
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
    int a[]={1,4,6,8,10};
    int b[]={3,5,7,9,12};
    first=create(first,a,5);
    second=create(second,b,5);
    merge(first,second);
    disp(third);
}