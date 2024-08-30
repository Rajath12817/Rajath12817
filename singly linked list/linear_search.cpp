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

//transposition and move to head

struct node * search(struct node *p,int key)
{
    struct node *q=NULL;
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next=p->next;
            p->next=first;
            first=p;
            return first;
        }
        q=p;
        p=p->next;
        
    }
    return NULL;
}

void disp(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}



// struct node * search(struct node *p,int key)
// {
//     while(p!=NULL)
//     {
//         if(key==p->data)
//         {
//             return p;
//         }
//         p=p->next;
//     }
//     return NULL;
// }


int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    printf("address of ele is  = %d\n",search(first,4));
    printf("address of ele is  = %d\n",search(first,5));
    disp(first);
}