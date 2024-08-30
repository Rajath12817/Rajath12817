#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*first=NULL;

void create(int n)
{
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    int temp;
    scanf("%d",&temp);
    first->prev=first;
    first->data=temp;
    first->next=first;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&temp);
        t->data=temp;
        t->next=NULL;
        t->prev=last;
        last->next=t;
        last=t;
        
    }
    last->next=first;
    first->prev=last;
}

int length(struct node *p)
{
    int len=0;
    do
    {
        len++;
        p=p->next;
    }while(p!=first);
    return len;
}

void disp(struct node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=first);
}

void delet(struct node *p,int pos)
{
    p=first;
    if(pos>=0 && pos<length(first))
    {
        if(pos==0)
        {
            if(first!=NULL)
            {
                first=first->next;
                first->prev=p->prev;
                p->prev->next=first;

            }
            free(p);
        }
        else
        {
            for(int i=0;i<pos;i++)
            {
                p=p->next;
            }
            p->prev->next=p->next;
            p->next->prev=p->prev;
            free(p);
        }
    }
}


void insert(struct node *p,int pos,int ele)
{
    struct node *q=NULL;
    if(pos>=0 && pos<=length(first))
    {
        if(pos==0)
        {
            first=first->next;
            first->prev=p->prev;
            p->prev->next=p->next;

        }
    }
}



int main()
{
    printf("Enter values : \n");
    create(5);
    delet(first,5);
    disp(first);
    printf("\nLength is %d",length(first));

}