#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node *next;
};

class link
{
    private:
        node *first;
    public:
        link()
        {
            first=NULL;
        }    
        link(int a[],int n);
        void display();
        void insert(int pos,int ele);
        void delet(int pos);
};


link::link(int a[],int n)
{
    node *t,*last;
    first=new node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}

void link:: display()
{
    node *p=first;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void link :: insert(int pos,int ele)
{
    node *p=first;
    node *t,*q;
    q=p;
    t=new node;
    t->data=ele;
    t->next=NULL;
    if(pos>=1 && pos<=5)
    {
        if(pos==1)
        {
            t->next=first;
            first=t;
        }
        else
        {
            for(int i=0;i<pos-1;i++)
            {
                q=p;
                p=p->next;
            }
            q->next=t;
            t->next=p;
        }
    }
    
}

void link :: delet(int pos)
{
    node *p=first;
    node *q;
    q=p;
    if(pos>=1 && pos<=5)
    {
        if(pos==1)
        {
            first=first->next;
            p=NULL;
            delete []p;
        }
        else
        {
            for(int i=0;i<pos-1;i++)
            {
                q=p;
                p=p->next;
                
            }
            q->next=p->next;
            p=NULL;
            delete []p;
            
        }
    }
    
}

int main()
{
    int a[]={1,2,3,4,5};
    link l(a,5);
    l.insert(4,20);
    l.delet(3);
    l.display();
}