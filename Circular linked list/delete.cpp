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

void delet(int pos)
{
    struct node *p=head;
    struct node *q=head;
    
    if(pos>=1 && pos<=5)
    {
        if(pos==1)
        {
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=head->next;
            head=head->next;
            free(q);
        }
        else
        {
            q=p;
            for(int i=0;i<pos-1;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=p->next;
            free(p);
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
    delet(1);
    disp(head);
    
}
