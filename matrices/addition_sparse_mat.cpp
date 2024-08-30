#include<iostream>
using namespace std;

class element
{
public:
    int i;
    int j;
    int x;

};

class sparse
{
private:
    int m;
    int n;
    int num;
    element *e;
public:
    sparse(int m,int n,int num)
    {
        this->m=m;
        this->n=n;
        this->num=num;
        e=new element[num];
    }
};

void create(struct sparse *s)
{
    int i;
    cout<<"Enter Dimensions "<<endl;
    cin>>s->m>>s->n;
    cout<<"Enter no of non zero ele "<<endl;
    cin>>s->num;
    s->e=new element[s->num];
    cout<<"Enter all non zero ele "<<endl;
    for(i=0;i<s->num;i++)
    {
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
    }
}

void disp(struct sparse s)
{
    int i,j,k=0;
    for(i=0;i<s.m;i++)
    {
        for(j=0;j<s.n;j++)
        {
            if(i==s.e[k].i && j==s.e[k].j)
            {
                cout<<s.e[k++].x<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}

struct sparse *add(struct sparse *s1,struct sparse *s2)
{
    struct sparse *sum;
    sum=new sparse;
    sum->e=new element[s1->num+s2->num];
    int i=0,j=0,k=0;
    while(i<s1->num && j<s2->num)
    {
        if(s1->e[i].i<s2->e[j].i)
        {
            sum->e[k++]=s1->e[i++];
        }
        else if(s1->e[i].i>s2->e[j].i)
        {
            sum->e[k++]=s2->e[j++];
        }
        else
        {
            if(s1->e[i].j<s2->e[j].j)
            {
            sum->e[k++]=s1->e[i++];
            }
            else if(s1->e[i].j>s2->e[j].j)
            {
            sum->e[k++]=s2->e[j++];
            }
            else
            {
                sum->e[k]=s1->e[i];
                sum->e[k++].x=s1->e[i++].x+s2->e[j++].x;
            }
        }

    }

for(;i<s1->num;i++)
{
    sum->e[k++]=s1->e[i];
}
for(;j<s2->num;j++)
{
    sum->e[k++]=s2->e[j];
}
sum->m=s1->m;
sum->n=s1->n;
sum->num=k;

return sum;
}


int main()
{
    struct sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);
    cout<<"First matrix "<<endl;
    disp(s1);
    cout<<"second matrix "<<endl;
    disp(s2);
    cout<<"sum matrix "<<endl;
    disp(*s3);

}

/// structure 

// #include<iostream>
// using namespace std;

// struct element
// {
//     int i;
//     int j;
//     int x;

// };

// struct sparse
// {
//     int m;
//     int n;
//     int num;
//     struct element *e;
// };

// void create(struct sparse *s)
// {
//     int i;
//     cout<<"Enter Dimensions "<<endl;
//     cin>>s->m>>s->n;
//     cout<<"Enter no of non zero ele "<<endl;
//     cin>>s->num;
//     s->e=new element[s->num];
//     cout<<"Enter all non zero ele "<<endl;
//     for(i=0;i<s->num;i++)
//     {
//         cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
//     }
// }

// void disp(struct sparse s)
// {
//     int i,j,k=0;
//     for(i=0;i<s.m;i++)
//     {
//         for(j=0;j<s.n;j++)
//         {
//             if(i==s.e[k].i && j==s.e[k].j)
//             {
//                 cout<<s.e[k++].x<<" ";
//             }
//             else
//             {
//                 cout<<"0 ";
//             }
//         }
//         cout<<"\n";
//     }
// }

// struct sparse *add(struct sparse *s1,struct sparse *s2)
// {
//     struct sparse *sum;
//     sum=new sparse;
//     sum->e=new element[s1->num+s2->num];
//     int i=0,j=0,k=0;
//     while(i<s1->num && j<s2->num)
//     {
//         if(s1->e[i].i<s2->e[j].i)
//         {
//             sum->e[k++]=s1->e[i++];
//         }
//         else if(s1->e[i].i>s2->e[j].i)
//         {
//             sum->e[k++]=s2->e[j++];
//         }
//         else
//         {
//             if(s1->e[i].j<s2->e[j].j)
//             {
//             sum->e[k++]=s1->e[i++];
//             }
//             else if(s1->e[i].j>s2->e[j].j)
//             {
//             sum->e[k++]=s2->e[j++];
//             }
//             else
//             {
//                 sum->e[k]=s1->e[i];
//                 sum->e[k++].x=s1->e[i++].x+s2->e[j++].x;
//             }
//         }

//     }

// for(;i<s1->num;i++)
// {
//     sum->e[k++]=s1->e[i];
// }
// for(;j<s2->num;j++)
// {
//     sum->e[k++]=s2->e[j];
// }
// sum->m=s1->m;
// sum->n=s1->n;
// sum->num=k;

// return sum;
// }


// int main()
// {
//     struct sparse s1,s2,*s3;
//     create(&s1);
//     create(&s2);
//     s3=add(&s1,&s2);
//     cout<<"First matrix "<<endl;
//     disp(s1);
//     cout<<"second matrix "<<endl;
//     disp(s2);
//     cout<<"sum matrix "<<endl;
//     disp(*s3);

// }