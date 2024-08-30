#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void insertsort(struct array *arr,int x)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
    return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
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
    insertsort(&arr,4);
    disp(arr);

}