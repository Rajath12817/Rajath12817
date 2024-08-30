#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

int get(struct array arr,int index)
{
    if(index>=0 && index<arr.length)
    {
      return arr.A[index];
    }
}

void set(struct array *arr,int index)
{
    if(index>=0 && index<arr->length)
    arr->A[index]=45;
}

int max(struct array arr)
{
    int i_max=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>i_max)
        {
            i_max=arr.A[i];
        }
    }
    return i_max;
}


int sum(struct array arr)
{
    int tot=0;
    for(int i=1;i<arr.length;i++)
    {
        tot=tot+arr.A[i];
    }

    return tot;
}


float avg(struct array arr)
{
    float tot=0.0;
    for(int i=1;i<arr.length;i++)
    {
        tot=tot+arr.A[i];
    }

    return tot/arr.length;
}


int min(struct array arr)
{
    int i_min=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>i_min)
        {
            i_min=arr.A[i];
        }
    }
    return i_min;
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
    int n,i;
    cout<<"Enter how many no : ";
    cin>>n;
    cout<<"enter all ele :";
    for(i=0;i<n;i++)
    {
        cin>>arr.A[i]; 
    }
    arr.length=n;
    // append(&arr,10);
    // insert(&arr,3,11);
    disp(arr);
    cout<<"\nget "<<get(arr,2)<<endl;
    set(&arr,2);
    disp(arr);
    cout<<"\nmax "<<max(arr);
    cout<<"\nmin "<<min(arr);
    cout<<"\nsum "<<sum(arr);
    cout<<"\navg "<<avg(arr);

}