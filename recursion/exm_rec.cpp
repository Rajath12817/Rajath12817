
1] FINDING POWER OF NUMBER

#include<iostream>
using namespace std;

int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    return m*pow(m,n-1);

}

int main()
{
    int n=3,m=3;
    cout<<"result = "<<pow(m,n);
} 