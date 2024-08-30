#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<"Enter array ele "<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];

    }
    int diff=a[0]-0;
    for(int j=0;j<10;j++)
    {
        if(a[j]-j!=diff)
        {
            while(diff<(a[j]-j))
            {
                cout<<"missing element is "<<diff+j<<endl;
                diff++;
            }
        }
    }

}