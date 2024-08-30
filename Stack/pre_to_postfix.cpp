#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;


struct node
{
    int data;
    struct node *next;
}*top=NULL;


void push(int x)
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

int pop()
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
        x=t->data;
        top=top->next;
        delete t;
    }
    return x;

}

int isoperand(char x)
{
    if(x=='+' || x=='-' || x=='*'  || x=='/' )
        return 0;
    else
        return 1;
}

int eval(char *evalu)
{
    int i=0;
    int x1,x2,r;
    while(evalu[i]!='\0')
    {
        if(isoperand(evalu[i]))
        {
            push(evalu[i]-'0');
        }
        else
        {
            x2=pop();
            x1=pop();
            switch(evalu[i])
            {
                case '+' : r=x1+x2;
                           push(r);
                           break;
                case '-' : r=x1-x2;
                           push(r);
                           break;
                case '*' : r=x1*x2;
                           push(r);
                           break;
                case '/' : r=x1/x2;
                           push(r);
                           break;           
            }
        }
        i++;
    }
    return pop();
}

int main()
{
    char postfix[]="35*62/+4-";
    int sum=eval(postfix);
    printf("sum %d",sum);
    return 0;
}