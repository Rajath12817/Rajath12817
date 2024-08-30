#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
}*head=NULL;

void create(int a[],int n)
{
    struct node *last,*t;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=a[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    last->next=head;
}

void insert(int pos,int ele)
{
    struct node *p=head;
    struct node *q,*t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=ele;
    if(pos>=1 && pos<=5)
    {
        if(pos==1)
        {
            t->next=head;
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=t;
            head=t;
        }
        else
        {
            q=p;
            for(int i=0;i<pos-1;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=t;
            t->next=p;
        }
    }
    

}

void disp(struct node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
}

int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    insert(1,20);
    disp(head);
    
}
