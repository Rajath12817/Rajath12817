#include<iostream>
#include<string>
using namespace std;

int main()
{
    char name[]="hello";
    char name2[10];
    char c;
    int i,j;
    for(i=0;name[i]!='\0';i++)
    {
    }
    i=i-1;
    for(j=0;i>=0;j++,i--)
    {
        name2[j]=name[i];
    }
    name2[j]='\0';
    cout<<name<<" "<<name2;
}