
// ITERATIVE METHOD 

// #include<iostream>
// using namespace std;

// int fib(int n)
// {
//     int t0=0,t1=1,s=0,i;
//     if(n<=1)
//     return n;
//     for(i=2;i<=n;i++)
//     {
//         s=t0+t1;
//         t0=t1;
//         t1=s;
//     }
//     return s;

// }

// int main()
// {
//     int n=10;
//     cout<<"result = "<<fib(n);
// } 


// RECURSIVE METHOD

// #include<iostream>
// using namespace std;

// int fib(int n)
// {
//     int t0=0,t1=1,s=0,i;
//     if(n<=1)
//     return n;
//     return fib(n-2)+fib(n-1);

// }

// int main()
// {
//     int n=10;
//     cout<<"result = "<<fib(n);
// } 


// MEMOIZATION METHOD


#include<iostream>
using namespace std;

int f[10];   ///global
int fib(int n)
{
    if(n<=1)
    {
        f[n]=n;
        return n;

    }
    else
    {
        if(f[n-2]==-1)
        {
            f[n-2]=fib(n-2);

        }
        if(f[n-1]==-1)
        {
            f[n-1]=fib(n-1);
        }
        return f[n-2]+f[n-1];
    }

}

int main()
{
    int n=10;
    for(int i=0;i<n;i++)
    {
        f[i]=-1;
    }
    cout<<"result = "<<fib(n);
} 