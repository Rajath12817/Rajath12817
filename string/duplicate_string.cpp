
/// using Hash table ////


#include<iostream>
#include<string>
using namespace std;

int main()
{
    char a[]="finding";
    int h[26]={0};
    for(int i=0;a[i]!='\0';i++)
    {
        h[a[i]-97]++;
    }
    for(int k=0;k<26;k++)
    {
        if(h[k]>1)
        {
            cout<<(char)(k+97)<<" repeated "<<h[k]<<" times "<<endl;
        }
    }
    
}