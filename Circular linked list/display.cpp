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

void disp(struct node *p)
{
    do
    {
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
}

void rdisplay(struct node *h)
{
    static int flag=0;
    if(h!=head || flag==0)
    {
        printf("%d ",h->data);
        flag=1;
        rdisplay(h->next);
    }
}

int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    disp(head);
    printf("\n");
    rdisplay(head);
    
}
