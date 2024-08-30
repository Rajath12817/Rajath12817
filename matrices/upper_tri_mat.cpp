#include<iostream>
using namespace std;
class mat
{
private:
    int *a;
    int n;
public:
    mat()
    {
        n=0;
        a=new int[n];
    }
    mat(int n)
    {
        this->n=n;
        a=new int[n*(n+1)/2];
    }
    ~mat()
    {
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void disp();
};

void mat:: set(int i,int j,int x)
{
    if(i<=j)
    {
        a[j*(j-1)/2+i-1]=x;
    }
}

int mat:: get(int i,int j)
{
    if(i<=j)
    {
        return a[j*(j-1)/2+i-1];
    }
    else
    {
        return 0;
    }
}

void mat :: disp()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=j)
            {
                cout<<a[j*(j-1)/2+i-1]<<"  ";
            }
            else
            {
                cout<<"0  ";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    mat m(4);
    int x;
    cout<<"enter all ele "<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cin>>x;
            m.set(i,j,x);
        }
    }
    m.disp();
    // cout<<m.get(1,2)<<endl;
    // cout<<m.get(2,2);

}



//structure(column major ) 

// #include<iostream>
// using namespace std;
// struct mat
// {
//     int *a;
//     int n;
// };
// void set(struct mat *m,int i,int j,int x)
// {
//     if(i<=j)
//     {
//         m->a[j*(j-1)/2+i-1]=x;
//     }
// }

// int get(struct mat m,int i,int j)
// {
//     if(i<=j)
//     {
//         return m.a[j*(j-1)/2+i-1];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void disp(struct mat m )
// {
//     for(int i=1;i<=m.n;i++)
//     {
//         for(int j=1;j<=m.n;j++)
//         {
//             if(i<=j)
//             {
//                 cout<<m.a[j*(j-1)/2+i-1]<<"  ";
//             }
//             else
//             {
//                 cout<<"0  ";
//             }
//         }
//         cout<<"\n";
//     }
// }
// int main()
// {
//     struct mat m;
//     int x;
//     cout<<"Enter dimention ";
//     cin>>m.n;
//     m.a=new int[m.n*(m.n+1)/2];
//     cout<<"enter all ele "<<endl;
//     for(int i=1;i<=m.n;i++)
//     {
//         for(int j=1;j<=m.n;j++)
//         {
//             cin>>x;
//             set(&m,i,j,x);
//         }
//     }
//     disp(m);
//     // cout<<get(m,1,2)<<endl;
//     // cout<<get(m,2,2);

// }

//structure(row major )

// #include<iostream>
// using namespace std;
// struct mat
// {
//     int *a;
//     int n;
// };
// void set(struct mat *m,int i,int j,int x)
// {
//     if(i<=j)
//     {
//         m->a[m->n*(i-1)-(i-1)*(i-2)/2+(j-i)]=x;
//     }
// }

// int get(struct mat m,int i,int j)
// {
//     if(i<=j)
//     {
//         return m.a[m.n*(i-1)-(i-1)*(i-2)/2+(j-i)];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void disp(struct mat m )
// {
//     for(int i=1;i<=m.n;i++)
//     {
//         for(int j=1;j<=m.n;j++)
//         {
//             if(i<=j)
//             {
//                 cout<<m.a[m.n*(i-1)-(i-1)*(i-2)/2+(j-i)]<<"  ";
//             }
//             else
//             {
//                 cout<<"0  ";
//             }
//         }
//         cout<<"\n";
//     }
// }
// int main()
// {
//     struct mat m;
//     int x;
//     cout<<"Enter dimention ";
//     cin>>m.n;
//     m.a=new int[m.n*(m.n+1)/2];
//     cout<<"enter all ele "<<endl;
//     for(int i=1;i<=m.n;i++)
//     {
//         for(int j=1;j<=m.n;j++)
//         {
//             cin>>x;
//             set(&m,i,j,x);
//         }
//     }
//     disp(m);
//     // cout<<get(m,1,2)<<endl;
//     // cout<<get(m,2,2);

// }