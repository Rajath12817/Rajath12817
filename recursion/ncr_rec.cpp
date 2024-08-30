#include<iostream>
using namespace std;

int fun(int t)
{
    if(t==0)
    {
        return 1;

    }
    return t*fun(t-1);

}

int main()
{
    int n=5,r=2,num,den;
    num=fun(n);
    int temp=fun(r);
    den=temp*fun(n-r);
    cout<<num/den;

}

/// USING PASCALS TRIANGLE MEETHOD 

// #include<iostream>
// using namespace std;

// int fun(int n,int r)
// {
//     if(r==0|| n==r)
//     {
//         return 1;

//     }
//     return fun(n-1,r-1)+fun(n-1,r);

// }

// int main()
// {
//     cout<<fun(3,2);
// }