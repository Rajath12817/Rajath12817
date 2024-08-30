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
        a=new int[2*n-1];
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
        a[j-i]=x;
    }
    else if(i>j)
    {
        a[n-1+i-j]=x;
    }
    
}

int mat:: get(int i,int j)
{
    if(i<=j)
    {
        return a[j-i];
    }
    else if(i>j)
    {
        return a[n-1+i-j];
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
        cout<<a[j-i]<<"  ";
    }
    else if(i>j)
    {
        cout<<a[n-1+i-j]<<"  ";
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


