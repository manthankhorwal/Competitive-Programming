#include<iostream>
using namespace std;
main()
{
    int n,t;
cin>>n;
cin>>t;
char a[n];
cin>>a;
int b[50];
int c=0;
for(int i=0;i<t;i++)
{
    for(int j=0;j<n-1;j++)
    {
        if(a[j]=='B'&&a[j+1]=='G')
           b[c++]=j;


    }
    for(int k=0;k<c;k++)
    {
        swap(a[b[k]],a[b[k]+1]);
    }
    c=0;
}
cout<<a;


}
