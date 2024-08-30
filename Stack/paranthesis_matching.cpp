#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


struct node
{
    char data;
    struct node *next;
}*top=NULL;


void push(char x)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    {
        cout<<"Stack is full";

    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

void pop()
{
    int x=-1;
    if(top==NULL)
    {
        printf("Stack is Empty");

    }
    else
    {
        struct node *t;
        t=(struct node*)malloc(sizeof(struct node));
        t=top;
        top=top->next;
        delete t;
    }

}


void disp()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}

int isbalanced(char *exp)
{
    int i;
    for(i=0;exp[i];i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(top==NULL)
            {
                return 0;
            }
            else
            {
                if(abs((int)top->data-(int)exp[i])>2)
                {
                    return 0;
                }
                else
                {
                    pop();
                }
            }
        }
    }
    if(top==NULL)
    {
        return 1;
    }
    else
    {return 0;}
}


int main()
{
    char exp[100]="(((()))){{[[]}}]";
    printf("value is %d ",isbalanced(exp));
    return 0;
}