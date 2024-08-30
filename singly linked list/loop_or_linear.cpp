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
    last->next=NULL;
}


int isloop(struct node *p,struct node *q)
{
    q=p;
    while(p!=NULL && q!=NULL)
    {
        p=p->next;
        q=q->next;
        if(q->next!=NULL)
        {
            q=q->next;
            if(p==q)
            {
                return 1;
            }
        }
        else if(q->next==NULL)
        {
            return 0;
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
    struct node *t1,*t2;
    int a[]={1,2,3,4,5};
    create(a,5);
    // t1=first->next->next->next;
    // t2=first->next->next->next->next;
    // t2->next=t1;
    printf("%d\n",isloop(first,NULL));
    // disp(first);
}