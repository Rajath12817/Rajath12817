#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;


void create(int a[],int n)
{
    struct node *t,*last;
    int i;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
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

int length(struct node *p)
{
    int len=0;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}



void insert(struct node *p,int pos, int ele)
{
    if(pos>=0 && pos<length(p))
    {
        struct node *t,*q;
        q=p;
        t=(struct node*)malloc(sizeof(struct node));
        if(pos==0)
        {
            t->data=ele;
            t->next=first;
            t->prev=NULL;
            first->prev=t;
            first=t;

        }
        else
        {
            for( int i = 0; i < pos - 1; i++)
            p = p->next;

            if(p)
            {
                t->data=ele;
                t->next = p->next;
                t->prev = p;
                if(p->next) p->next->prev = t;
                p->next = t;
            }
        }
    }
}

int main()
{
    int a[]={10,20,30,40,50};
    create(a,5);
    disp(first);
    printf("\n");
    insert(first,4,20);
    disp(first);


}