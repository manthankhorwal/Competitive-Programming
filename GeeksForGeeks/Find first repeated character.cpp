#include<bits/stdc++.h>

using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
         cin>>s;

    int flag=1;
    map<char,int> hash1;
    for(int i=0;i<s.size();i++)
    {
        hash1[s[i]]++;
        if(hash1[s[i]]>1)
        {cout<<s[i];
        flag=0;
        break;
        }
    }
        if(flag==1)
            cout<<"-1";
           cout<<endl;
    }}

