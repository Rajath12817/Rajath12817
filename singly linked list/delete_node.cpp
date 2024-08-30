#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>


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
 
int delet(int pos)
{
    int x=-1;
    struct node *p=first,*q=NULL;
    if(pos>=1 && pos<=5)
    {
        if(pos==1)
    {
        first=first->next;
        x=p->data;
        free(p);
        
    }
    else
    {
        for(int i=0;i<pos-1 && p;i++)
        {
            q=p;
            p=p->next;
        }
        if(p)
        {  
            q->next=p->next;
            x=p->data;
            free(p);    
        }
    }
    return x;
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
    printf("Element deleted is %d\n",delet(3));
    disp(first);
}