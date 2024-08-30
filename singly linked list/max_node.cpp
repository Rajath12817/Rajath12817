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

// int max(struct node *p)
// {
//     int max=INT_MIN;
//     while(p!=NULL)
//     {
//         if(p->data>max)
//         {
//             max=p->data;

//         }
//         p=p->next;
//     }
//     return max;
// }

//Recursive method 


int max(struct node *p)
{
 int x=0;

 if(p==0)
 return -7866;
 x=max(p->next);
 if(x>p->data)
 return x;
 else
 return p->data;
}
int main()
{
    int a[]={1,5,7,3,2};
    create(a,5);
    printf("maximum no is  %d",max(first));
}