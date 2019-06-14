#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
                cin>>s;

                int a=0;
                int n=s.size()-1;

       for(int j=0;j<s.size();j++)
       { int c=(s[j]-'0');

int v=pow(10,n-j);
           a=a+c*v;

       }
       cout<<a;

    }


}
