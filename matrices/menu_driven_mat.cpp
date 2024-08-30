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
    void create(int n,int x);
    void set(int i,int j,int x);
    int get(int i,int j);
    void disp();
};

void mat::create(int n,int x)
{
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i]=x;
    }
}

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
    int n=4,x,ch,i,j;
    do
    {
        cout<<"1. create "<<endl;
        cout<<"2. set "<<endl;
        cout<<"3. get "<<endl;
        cout<<"4. Display "<<endl;
        cout<<"5. exit "<<endl;
        cout<<"Enter choice "<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1: m.create(n,x);
                    break;
            case 2: cout<<"Enter i & j "<<endl;
                    cin>>i>>j;
                    cout<<"enter element to insert "<<endl;
                    cin>>x;
                    m.set(i,j,x);
                    break;
            case 3: cout<<"Enter i & j "<<endl;
                    cin>>i>>j;
                    cout<<"Element is "<<m.get(i,j)<<endl;
                    break;
            case 4: m.disp();
                    break;
            case 5: cout<<"Thank you "<<endl;
                    exit(0);
            default : cout<<"Invalid input \nTry again "<<endl;
        }
        cout<<"\n\n";
        

    }while(ch!=5);

}