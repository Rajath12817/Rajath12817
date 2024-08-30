#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void negetive(struct array *arr)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)
        {
            i++;
        }
        while(arr->A[j]>0)
        {
            j--;
        }
        if(i<j)
        {
            int temp=arr->A[i];
            arr->A[i]=arr->A[j];
            arr->A[j]=temp;
        }
    }
}

void disp(struct array arr)
{
    int i;
    cout<<"Elements are :";
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<" ";
    }
}
int main()
{
    struct array arr;
    arr.size=10;
    int n,i;
    cout<<"Enter how many no : ";
    cin>>n;
    cout<<"enter all ele :";
    for(i=0;i<n;i++)
    {
        cin>>arr.A[i]; 
    }
    arr.length=n;
    negetive(&arr);
    disp(arr);

}