#include<iostream>
using namespace std;

int main()
{
    int a[7];
    cout<<"Enter ele "<<endl;
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    int min=a[0];
    int max=a[6];
    for(int i=0;i<7;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int n=max+1;
    int *b=new int[n];
    for(int i=0;i<n;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<7;i++)
    {
        b[a[i]]=b[a[i]]+1;
    }
    for(int j=min;j<=max;j++)
    {
        if(b[j]!=1)
        {
            cout<<"missing ele "<<j<<endl;
        }
    }
    delete []b;
}