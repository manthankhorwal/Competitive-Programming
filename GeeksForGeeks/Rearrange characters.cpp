#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
     while(t--)
     {


     int a[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;

    }
    int freq=*max_element(a,a+26);
    if((s.size()%2==0&&freq<=(s.size()/2))||(s.size()%2!=0&&freq<=(s.size()/2)+1))
                 cout<<1;
    else
        cout<<0;
    cout<<endl;
   }
}
