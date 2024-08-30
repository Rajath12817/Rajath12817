// #include<iostream>
// using namespace std;

// int tay(int m,int n)
// {
//     static int p=1,f=1,c=1;
//     if(n==0)
//     {
//         return 1;
//     } 
//     p=p*m;
//     f=f*c;
//     c++;
//     return (p/f)+tay(m,n-1);

// }

// int main()
// {
//     int n=3,m=2;
//     cout<<"result = "<<tay(m,n);
// } 



//// OR 


// #include<iostream>
// using namespace std;

// double tay(int m,int n)
// {
//     static double p=1,f=1;
//     double r;
//     if(n==0)
//     {
//         return 1;
//     } 
//     r=tay(m,n-1);
//     p=p*m;
//     f=f*n;
//     return (p/f)+r;

// }

// int main()
// {
//     int n=10,m=4 ;
//     cout<<"result = "<<tay(m,n);
// } 



//// USING HORNERS RULE 

#include<iostream>
using namespace std;

double tay(int m,int n)
{
    static double s=1;
    if(n==0)
    {
        return s;
    }
    else
    {
        s=1+s*m/n;
        return tay(m,n-1);
    }
    

}

int main()
{
    int n=10,m=2;
    cout<<"result = "<<tay(m,n);
} 