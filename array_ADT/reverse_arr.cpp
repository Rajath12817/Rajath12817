
#include<iostream>
using namespace std;

class array
{
private:
    int *A;
    int size;
    int length;
    void swap(int *x,int *y);
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
        int n;
        A=new int[size];
        cout<<"Enter how many no : ";
        cin>>length;
        cout<<"enter all ele :";
        for(int i=0;i<length;i++)
        {
        cin>>A[i];
        }
    }
    void disp();
    void reverse2();
    
    
};

void array:: swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void array:: reverse2()
{
    int i;
    int j;
    for(i=0, j=length-1;i<j;i++,j--)
    {
        swap(&A[i],&A[j]);
    }
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
    int sz;
    cout<<"Enter array size : ";
    cin>>sz;
    arr=array(sz);
    arr.reverse2();
    arr.disp();

}

/// STRUCTURE ////


// #include<iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void reverse(struct array *arr)
// {
//     int B[arr->length+1];
//     int i,j;
//     for(i=arr->length-1,j=0;i>=0;i--,j++)
//     {
//         B[j]=arr->A[i];
//     }
//     for(i=0;i<arr->length;i++)
//     {
//         arr->A[i]=B[i];
//     }
// }

// void reverse2(struct array *arr)
// {
//     int i;
//     int j;
//     for(i=0, j=arr->length-1;i<j;i++,j--)
//     {
//         int temp=arr->A[i];
//         arr->A[i]=arr->A[j];
//         arr->A[j]=temp;
//     }
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
//     reverse2(&arr);
//     disp(arr);

// }