// #include<stdio.h>
// #include<stdlib.h>
#include<iostream>
using namespace std;
// struct node
// {
//     int data;
//     struct node *next;
// }*top=NULL;

// void push(int x)
// {
//     struct node *t;
//     t=(struct node*)malloc(sizeof(struct node));
//     if(t==NULL)
//     {
//         printf("Stack is Full\n");

//     }
//     else{
//         t->data=x;
//         t->next=top;
//         top=t;
//     }
// }

// int pop()
// {
//     int x=-1;
//     if(top==NULL)
//     {
//         printf("Stack is empty\n");

//     }
//     else
//     {
//         struct node *t;
//         t=top;
//         top=top->next;
//         x=t->data;
//         free(t);
//     }
//     return x;

// }

// void disp()
// {
//     struct node *p;
//     p=top;
//     while(p!=NULL)
//     {
//         printf("%d ",p->data);
//         p=p->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     push(10);
//     push(20);
//     push(30);
//     disp();
//     printf("Deleted ele is %d \n",pop());
//     disp();
// }



//// C++ code

class node
{
    public:
        int data;
        node *next;
};

class stack
{
    private:
    node *top;
    public:
        stack()
        {
            top=NULL;
        }
        void push(int x);
        int pop();
        void disp();


};


void stack :: push(int x)
{
    node *t;
    t=new node;
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

int stack :: pop()
{
    int x=-1;
    if(top==NULL)
    {
        cout<<"Stack is Empty";

    }
    else
    {
        node *t;
        t=top;
        top=top->next;
        x=t->data;
        delete t;
    }
    return x;

}


void stack :: disp()
{
    node *p;
    p=new node;
    p=top;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";
}


int main()
{
    stack stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.pop();
    stk.disp();
    return 0;
}