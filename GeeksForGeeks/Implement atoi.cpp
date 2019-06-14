#include<bits/stdc++.h>
using namespace std;
int atoi(string s)
{
    int a=0;
    int flag=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z'&&s[i]>='A'&&s[i]<='Z')
           {
               return -1;
           }
           if(s[i]=='-')
           {
               flag=-1;
               continue;
           }
           a=a*10+s[i]-'0';
    }
    return a*flag;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<atoi(s);
        cout<<endl;
    }

}
