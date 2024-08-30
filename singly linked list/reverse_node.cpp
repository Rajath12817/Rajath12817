#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


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

////USING SLIDING POINTER METHOD ///

// void reverse2(struct node *p)
// {
//     struct node *q=NULL,*r=NULL;
//     while(p!=NULL)
//     {
//         r=q;
//         q=p;
//         p=p->next;
//         q->next=r;
//     }
//     first=q;
// }


//USING RECURSION //

void reverse2(struct node *p,struct node *q)
{
    if(p!=NULL)
    {
        reverse2(p->next,p);
        p->next=q;
    }
    else
    {
        first=q;
    }
}



// void reverse(struct node *p,int a[],int n)
// {

//     int i=n-1;
//     while(p!=NULL)
//     {
//         p->data=a[i];
//         i--;
//         p=p->next;
//     }
// }

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
    int a[]={1,5,7,3,2};
    create(a,5);
    reverse2(first,NULL);
    disp(first);
    
}