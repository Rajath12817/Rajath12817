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
    int i;
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }
}

int length(struct node *p)
{
    int len=0;
    while(p!=NULL)
    {
        len++;
        p=p->next;
    }
    return len;
}

void disp(struct node *p)
{
    if(first==NULL)
    {
        printf("Empty !");
        return;
    }
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void insert(struct node *p,int pos,int ele)
{
    struct node *q;
    q=(struct node *)malloc(sizeof(struct node));
    q->data=ele;
    if(pos>=1 && pos<=length(first)+1)
    {
        if(pos==1)
    {
        q->next=first;
        first=q;
        
    }
    else
    {
        for(int i=1;i<pos-1 && p;i++)
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
    
}


 
int delet(int pos)
{
    int x=-1;
    struct node *p=first,*q=NULL;
    if(pos>=1 && pos<=length(first));
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

int main()
{
    int ch,pos,ele,temp;
    int a[]={3,5,7,10,15};
    while(1)
    {
        printf("\n\n1. create node\n2. Insert node\n3. Delete a node\n4. length of node\n5. Display list\n\n");
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: create(a,5);
                    printf("List created Succesfully\n");
                    break;

            case 2: printf("Enter pos \n");
                    scanf("%d",&pos);
                    printf("Enter ele \n");
                    scanf("%d",&ele);
                    insert(first,pos,ele);
                    break;
            case 3: printf("Enter pos \n");
                    scanf("%d",&pos);
                    temp=delet(pos);
                    printf("Element deleted is %d\n",temp);
                    break;
            case 4: printf("Length os list is %d",length(first));
                    break;
            case 5: printf("Nodes are ");
                    disp(first);
                    break;

            case 0: printf("Thank you \n");
                    exit(0);
            default : printf("Invalid input\n");  
                    break;      

        }
    }

}