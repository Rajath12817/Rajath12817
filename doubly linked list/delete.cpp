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



void delet(struct node *p,int pos)
{
    if(pos>=1 && pos<=length(p))
    {
        if(pos==1)
        {
            first=first->next;
            if(first)
            {
                first->prev=NULL;
                free(p);

            }

        }
        else
        {
            for(int i=0;i<pos-1;i++)
            {
                p=p->next;
            }
            p->prev->next=p->next;
            if(p->next!=NULL)
            {
                p->next->prev=p->prev;
            }
            free(p);
        }
    }
}

int main()
{
    int a[]={10,20,30,40,50};
    create(a,5);
    disp(first);
    printf("\n");
    delet(first,3);
    disp(first);
}