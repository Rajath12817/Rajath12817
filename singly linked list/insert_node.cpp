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

// / Inserting at first position 
// struct node* insert(struct node *p)
// {
//     struct node *q;
//     q=(struct node *)malloc(sizeof(struct node));
//     q->data=20;
//     q->next=NULL;
//     q->next=p;
//     p=q;
//     return p;
    
// }

//// Inserting at  first and specified position 
void insert(struct node *p,int pos,int ele)
{
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=ele;
    if(pos==0)
    {
        q->next=first;
        first=q;
        
    }
    else
    {
        for(int i=0;i<pos-1 && p;i++)
        {
            p=p->next;
        }
        if(p)
        {  
            q->next=p->next;
            p->next=q;
            
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
    int a[]={1,2,3,4,5};
    create(a,5);
    insert(first,4,15);
    disp(first);
}