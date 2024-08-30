

#include<iostream>
using namespace std;

class array
{
private:
    int *A;
    int size;
    int length;
public:
    array()
    {
        size=0;
        length=0;
        A=new int[size];
    }
    array(int sz)
    {
        size=sz;
        A=new int[size];
        cout<<"Enter how many no : ";
        cin>>length;
        cout<<"enter all ele :";
        for(int i=0;i<length;i++)
        {
        cin>>A[i];
        }
    }
    int binary(int key);
    void disp();
};
int array:: binary(int key)
{
    int l=0,h,mid;
    h=length-1;
    while(l<=h)
    {

        mid=(l+h)/2;
        if(key==A[mid])
        {
            return mid;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}


void array :: disp()
{
    int i;
    cout<<"\nElements are :";
    for(i=0;i<length;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    array arr;
    int sz,key;
    cout<<"Enter array size : ";
    cin>>sz;
    arr=array(sz);
    cout<<"\nEnter key ";
    cin>>key;
    cout<<"\nElement found at "<<arr.binary(key)<<" index ";
    arr.disp();

}



/// structure  ///




// #include<iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int length;
// };

// int binary(struct array arr,int key)
// {
//     int l=0,h,mid;
//     h=arr.length-1;
//     while(l<=h)
//     {

//         mid=(l+h)/2;
//         if(key==arr.A[mid])
//         {
//             return mid;
//         }
//         else if(key<arr.A[mid])
//         {
//             h=mid-1;
//         }
//         else
//         {
//             l=mid+1;
//         }
//     }
//     return -1;
// }

// recurtion method
// int binary(struct array arr,int l,int h,int key)
// {
//     int mid;
//     while(l<=h)
//     {

//         mid=(l+h)/2;
//         if(key==arr.A[mid])
//         {
//             return mid;
//         }
//         else if(key<arr.A[mid])
//         {
//             return binary(arr,l,mid+1,key);
//         }
//         else
//         {
//             return binary(arr,mid-1,h,key);
//         }
//     }
//     return -1;
// }

// void disp(struct array arr)
// {
//     int i;
//     cout<<"Elements are :";
//     for(i=0;i<arr.length;i++)
//     {
//         cout<<arr.A[i]<<" ";
//     }
// }
// int main()
// {
//     struct array arr;
//     int n,i;
//     cout<<"Enter how many no : ";
//     cin>>n;
//     cout<<"enter all ele :";
//     for(i=0;i<n;i++)
//     {
//         cin>>arr.A[i];
//     }
//     arr.length=n;
//     disp(arr);
//     cout<<"\nKey found at index "<<binary(arr,0,arr.length-1,2)<<endl;
//     disp(arr);

// }