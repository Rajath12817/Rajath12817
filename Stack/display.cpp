#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;

};

void create(struct stack *st)
{
    printf("Enter size ");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int *)malloc(st->size*sizeof(int));

}

void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d ",st.s[i]);
    }
    printf("\n");
}

void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        st->top++;
        st->s[st->top]=x;

    }
}

int  pop(struct stack *st)
{
    int x;
    if(st->top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        
        x=st->s[st->top];
        st->top--;

    }
    return x;
}


int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)
    {
        printf("Invalid Index \n");

    }
    x=st.s[st.top-index+1];

    return x;
}


void isempty(struct stack st)
{
    if(st.top==-1)
    {
        printf("True,Stack is empty\n");
    }
    else
    {
        printf("False,Stack is not empty\n");
    }
}

void isfull(struct stack st)
{
    if(st.top==st.size-1)
    {
        printf("True,Stack is full\n");
    }
    else
    {
        printf("False,Stack is not full\n");
    }
}

int main()
{
    struct stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    // printf("Deleted value is %d\n",pop(&st));
    printf("peeked value is %d\n",peek(st,3));
    isfull(st);
    isempty(st);
    display(st);

}