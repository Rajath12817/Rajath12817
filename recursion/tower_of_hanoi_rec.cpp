#include<iostream>
using namespace std;
void toh(int n,int a,int b,int c)
{
    if(n>0)
    {   

    toh(n-1,a,c,b);
    cout<<"move from "<<a<<" to "<<c<<endl;
    toh(n-1,b,a,c);

    }
}
int main()
{
    int n=4,a=1,b=2,c=3;
    toh(n,a,b,c);
}