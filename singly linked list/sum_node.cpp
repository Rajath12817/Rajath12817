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
}

// int add(struct node *p)
// {
//     int sum=0;
//     while(p!=NULL)
//     {
//         sum=sum+p->data;
//         p=p->next;
//     }
//     return sum;
// }

//Recursive method 
int add(struct node *p)
{
    static int sum=0;
    if(p==NULL)
    {
        return sum;
    }
    else
    {
        sum=sum+p->data;
        add(p->next);
    }

}


int main()
{
    int a[]={1,2,3,4,5};
    create(a,5);
    printf("sum = %d",add(first));
}