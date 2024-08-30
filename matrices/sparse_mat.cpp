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
    ~sparse()
    {
        delete [] e;
    }
    void read()
    {
        int i;
        cout<<"Enter all non zero ele "<<endl;
        for(i=0;i<num;i++)
        {
           cin>>e[i].i>>e[i].j>>e[i].x;
        }
    }
    void disp()
    {
        int i,j,k=0;
       for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==e[k].i && j==e[k].j)
            {
                cout<<e[k++].x<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<"\n";
    } 
    }
    
};


int main()
{
    int m,n,num;
    cout<<"Enter Dimensions "<<endl;
    cin>>m>>n;
    cout<<"Enter no of non zero ele "<<endl;
    cin>>num;
    sparse s(m,n,num);
    s.read();
    s.disp();

}


// structures 

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
// int main()
// {
//     struct sparse s;
//     create(&s);
//     disp(s);

// }