
/// FOR SORTED ARRAY


#include<iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

struct array* i_union(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=new struct array;

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr1->A[i]>arr2->A[j])
        {
            arr3->A[k++]=arr2->A[j++];
        }
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
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
    arr3->length=k;
    arr3->size=10;

    return arr3;
}


struct array* inter(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=new struct array;

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            i++;
        }
        else if(arr1->A[i]>arr2->A[j])
        {
            j++;
        }
        else
        {
            arr3->A[k++]=arr1->A[i++];
            j++;
        }
    }
    arr3->length=k;
    arr3->size=10;

    return arr3;
}

struct array* diff(struct array *arr1,struct array *arr2)
{
    int i,j,k;
    i=j=k=0;
    struct array *arr3=new struct array;

    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->A[i]<arr2->A[j])
        {
            arr3->A[k++]=arr1->A[i++];
        }
        else if(arr1->A[i]>arr2->A[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for(;i<arr1->length;i++)
    {
        arr3->A[k++]=arr1->A[i];
    }
    arr3->length=k;
    arr3->size=10;

    return arr3;
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
    struct array arr2={{3,6,7,15,20},10,5};
    struct array *arr3;
    // arr3=i_union(&arr1,&arr2);
    // arr3=inter(&arr1,&arr2);
    arr3=diff(&arr1,&arr2);
    disp(*arr3);

}