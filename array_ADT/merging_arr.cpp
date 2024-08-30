// #include<iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int size;
//     int length;
// };

// struct array* merge(struct array *arr1,struct array *arr2)
// {
//     int i,j,k;
//     i=j=k=0;
//     struct array *arr3=new struct array;

//     while(i<arr1->length && j<arr2->length)
//     {
//         if(arr1->A[i]<arr2->A[j])
//         {
//             arr3->A[k++]=arr1->A[i++];
//         }
//         else
//         {
//             arr3->A[k++]=arr2->A[j++];
//         }
//     }
//     for(;i<arr1->length;i++)
//     {
//         arr3->A[k++]=arr1->A[i];
//     }
//     for(;j<arr2->length;j++)
//     {
//         arr3->A[k++]=arr2->A[j];
//     }
//     arr3->length=arr1->length+arr2->length;
//     arr3->size=10;

//     return arr3;
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
//     struct array arr1={{2,6,10,15,25},10,5};
//     struct array arr2={{3,4,7,18,20},10,5};
//     struct array *arr3;
//     arr3=merge(&arr1,&arr2);
//     disp(*arr3);

// }





////  OR ////////


#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void merge(struct array *arr1,struct array *arr2,struct array *arr3)
{
    int i,j,k;
    i=j=k=0;
    // struct array *arr3=new struct array[];

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else
        {
            arr3->A[k++]=arr2->A[j++];
        }
    }
    for(;i<arr1->length;i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
    for(;j<arr2->length;j++)
    {
        arr3->A[k++]=arr2->A[j];
    }
    arr3->length=arr1->length+arr2->length;
    arr3->size=10;
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
    struct array arr1={{2,6,10,15,25},10,5};
    struct array arr2={{3,4,7,18,20},10,5};
    struct array arr3;
    merge(&arr1,&arr2,&arr3);
    disp(arr3);

}