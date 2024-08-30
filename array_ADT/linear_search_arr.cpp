// #include<iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int length;
// };

// int linear(struct array arr,int key)
// {
//     for(int i=0;i<arr.length;i++)
//     {
//         if(key==arr.A[i])
//         {
//             return i;
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
//     cout<<"\nKey found at index "<<linear(arr,3);

// }


///TRANSPOSITION

// #include<iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int length;
// };

// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int linear(struct array *arr,int key)
// {
//     for(int i=0;i<arr->length;i++)
//     {
//         if(key==arr->A[i])
//         {
//             swap(&arr->A[i],&arr->A[i-1]);
//             return i;
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
//     cout<<"\nKey found at index "<<linear(&arr,3)<<endl;
//     disp(arr);

// }


///MOVING TO HEAD/FIRST PLACE


// #include<iostream>
// using namespace std;

// struct array
// {
//     int A[10];
//     int length;
// };

// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }

// int linear(struct array *arr,int key)
// {
//     for(int i=0;i<arr->length;i++)
//     {
//         if(key==arr->A[i])
//         {
//             swap(&arr->A[i],&arr->A[0]);
//             return i;
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
//     cout<<"\nKey found at index "<<linear(&arr,3)<<endl;
//     disp(arr);

// }