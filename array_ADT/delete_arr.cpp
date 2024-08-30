
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
    void append(int x);
    void insert(int index,int x);
    void delet(int index);
};
void array::append(int x)
{
    A[length++]=x;
}

void array:: insert(int index,int x)
{
    if(index>=0 && index<=length)
    {
        for(int i=length;i>index;i--)
        {
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
    }
}

void array:: delet(int index)
{
    if(index>=0 && index<=length)
    {
        for(int i=index;i<length-1;i++)
        {
            A[i]=A[i+1];
        }
        length--;
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
    arr.disp();
    // arr.append(10);
    // arr.insert(2,25);
    arr.disp();
    arr.delet(3);
    cout<<"\nAfter deletion ";
    arr.disp();

}

////STRUCTURE////

// #include<iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// void append(struct array *arr,int x)
// {
//     arr->A[arr->length++]=x;
// }

// void insert(struct array *arr ,int index,int x)
// {
//     if(index>=0 && index<=arr->length)
//     {
//         for(int i=arr->length;i>index;i--)
//         {
//             arr->A[i]=arr->A[i-1];
//         }
//         arr->A[index]=x;
//         arr->length++;
//     }
// }

// void delet(struct array *arr,int index)
// {
//     if(index>=0 && index<=arr->length)
//     {
//         for(int i=index;i<arr->length-1;i++)
//         {
//             arr->A[i]=arr->A[i+1];
//         }
//         arr->length--;
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
//     // append(&arr,10);
//     // insert(&arr,3,11);
//     delet(&arr,4);
//     disp(arr);

// }