
//// UNION  

// #include<iostream>
// using namespace std;

// void unio(int a[],int b[])
// {
//     int c[20];
//     int f=0;
//     int k=0,i=0,j=0;
//     for(i=0;i<5;i++)
//     {
//         c[k++]=a[i];
//     }    
//     for(int j=0;j<5;j++)
//     {
//         for(i=0;i<5;i++)
//         {
//             if(a[i]==b[j])
//             {
//                 f++;
//             }
//         }
//         if(f==0)
//         {
//             c[k++]=b[j];
//         }
//         f=0;  

//     }
    
//     cout<<"Elements are : ";
//     for(int s=0;s<k;s++)
//     {
//         cout<<c[s]<<" ";
//     }
// }
// int main()
// {
//     int a[]={1,2,3,6,9};
//     int b[]={45,6,78,4,9};
//     unio(a,b);
// }


//// INTERSECTION 

// #include<iostream>
// using namespace std;

// void inter(int a[],int b[])
// {
//     int c[20];
//     int f=0;
//     int k=0,i=0,j=0;   
//     for(int i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             if(a[i]==b[j])
//             {
//                 c[k++]=a[i];
//             }
//         }  

//     }
    
//     cout<<"Elements are : ";
//     for(int s=0;s<k;s++)
//     {
//         cout<<c[s]<<" ";
//     }
// }
// int main()
// {
//     int a[]={1,2,3,6,9};
//     int b[]={45,6,78,4,9};
//     inter(a,b);
// }


//// DIFFERENCE


// #include<iostream>
// using namespace std;

// void diff(int a[],int b[])
// {
//     int c[20];
//     int f=0;
//     int k=0,i=0,j=0;   
//     for(int i=0;i<5;i++)
//     {
//         for(j=0;j<5;j++)
//         {
//             if(a[i]==b[j])
//             {
//                 f++;
//             }
//         }  
//         if(!f)
//         {
//             c[k++]=a[i];
//         }

//     }
    
//     cout<<"Elements are : ";
//     for(int s=0;s<k;s++)
//     {
//         cout<<c[s]<<" ";
//     }
// }
// int main()
// {
//     int a[]={1,2,3,6,9};
//     int b[]={45,6,78,4,9};
//     diff(a,b);
// }
