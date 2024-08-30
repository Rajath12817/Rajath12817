// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[7];
//     cout<<"Enter ele "<<endl;
//     for(int i=0;i<7;i++)
//     {
//         cin>>a[i];
//     }
//     int min=a[0];
//     int max=a[6];
//     for(int i=0;i<7;i++)
//     {
//         if(a[i]<min)
//         {
//             min=a[i];
//         }
//         if(a[i]>max)
//         {
//             max=a[i];
//         }
//     }
//     int n=max+1;
//     int *b=new int[n];
//     for(int i=0;i<n;i++)
//     {
//         b[i]=0;
//     }
//     for(int i=0;i<7;i++)
//     {
//         b[a[i]]=b[a[i]]+1;
//     }
//     for(int j=min;j<=max;j++)
//     {
//         if(b[j]>1)
//         {
//             cout<<"Element "<<j<<" repeated "<<b[j]<<" times "<<endl;
//         }
//     }
//     delete []b;
// }


//// time consuming method 


#include<iostream>
using namespace std;

int main()
{
    int a[]={1,1,3,4,5,6,6};
    for(int i=0;i<7;i++)
    {
        if(a[i]!=-1)
        {
            int c=1;
            for(int j=i+1;j<7;j++)
            {
                if(a[i]==a[j])
                {
                    c=c+1;
                    a[j]=-1;
                }
            }
            if(c>1)
            {
                cout<<"Element "<<a[i]<<" repeated "<<c<<" times \n";
            }
        }
    }
}

