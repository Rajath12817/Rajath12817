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
};

void array :: disp()
{
    int i;
    cout<<"Elements are :";
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

}

//structure 

// #include<iostream>
// using namespace std;

// struct array
// {
//     int *A;
//     int size;
//     int length;
// };

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
//     cout<<"Enter array size : ";
//     cin>>arr.size;
//     arr.A=new int[arr.size];
//     arr.length=0;
//     cout<<"Enter how many no : ";
//     cin>>n;
//     cout<<"enter all ele :";
//     for(i=0;i<n;i++)
//     {
//         cin>>arr.A[i];
//     }
//     arr.length=n;
//     disp(arr);

// }