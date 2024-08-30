#include<stdio.h>
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

void sort(struct node *p,int n)
{
    struct node *q=first;
    p=p->next;
    for(int i=0;i<n;i++)
    {
        while(p!=NULL)
        {
            if(p->data<q->data)
            {
                int t=p->data;
                p->data=q->data;
                q->data=t;
                q=p;
                p=p->next;
            }
            else
            {
                q=p;
                p=p->next;
            }
        }
        // free(p);
        // free(q);    // if used it will not print anything
        q=p=first;
        p=p->next;
    }
}

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
    int a[]={50,40,30,10,20};
    int n=5;
    create(a,5);
    // disp(first);
    // printf("\n");
    // sort(first,n);
    // disp(first);
    // printf("\n");
    insert(first,3,25);
    n++;
    insert(first,1,15);
    n++;
    insert(first,0,35);
    n++;
    insert(first,4,6);
    n++;
    insert(first,3,21);
    n++;
    insert(first,1,76);
    n++;
    insert(first,2,32);
    n++;
    disp(first);
    printf("\n");
    sort(first,n);
    disp(first);
}