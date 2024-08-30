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
        a=new int[n];
    }
    ~mat()
    {
        delete []a;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void disp();
};

// mat :: mat(int n)
// {
//     this->n=n;
//     a=new int[n];
// }
void mat:: set(int i,int j,int x)
{
    if(i==j)
    {
        a[i-1]=x;
    }
}

int mat:: get(int i,int j)
{
    if(i==j)
    {
        return a[i-1];
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
            if(i==j)
            {
                cout<<a[i-1]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}
int main()
{
    mat m(4);
    m.set(1,1,2);
    m.set(2,2,3);
    m.set(3,3,5);
    m.set(4,4,7);
    m.disp();
    cout<<endl;
    m.set(3,3,9);
    m.disp();
    cout<<m.get(1,2)<<endl;
    cout<<m.get(2,2);

}



// //structure 

// #include<iostream>
// using namespace std;
// struct mat
// {
//     int a[10];
//     int n;
// };
// void set(struct mat *m,int i,int j,int x)
// {
//     if(i==j)
//     {
//         m->a[i]=x;
//     }
// }

// int get(struct mat m,int i,int j)
// {
//     if(i==j)
//     {
//         return m.a[i];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void disp(struct mat m )
// {
//     for(int i=0;i<m.n;i++)
//     {
//         for(int j=0;j<m.n;j++)
//         {
//             if(i==j)
//             {
//                 cout<<m.a[i]<<" ";
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
//     struct mat m;
//     m.n=4;
//     set(&m,0,0,2);
//     set(&m,1,1,3);
//     set(&m,2,2,5);
//     set(&m,3,3,7);
//     disp(m);
//     cout<<get(m,1,2)<<endl;
//     cout<<get(m,2,2);

// }