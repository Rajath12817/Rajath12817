#include<iostream>
using namespace std;
int main()
{
    char a[]="verb?se";
    char b[]="?bserve";
    int h[128]={0};
    int c=0;
    for(int i=0;a[i]!=0;i++)
    {
        h[a[i]]++;
    }
    for(int j=0;b[j]!=0;j++)
    {
        h[b[j]]--;
    }
    for(int k=0;k<128;k++)
    {
        if(h[k]!=0)
        {
            cout<<"Not an anagram "<<endl;
            c=c+1;
            break;
        }
    }
    if(c==0)
    cout<<"its an anagram ";
}