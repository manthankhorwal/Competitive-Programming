#include<bits/stdc++.h>
using namespace std;
string Remove(string str)

{
    string temp;
    if(str[0]!=str[1])
        temp+=str[0];
    for(int i=1;i<str.size();i++)
    {
        if(str[i]!=str[i-1]&&str[i]!=str[i+1])
              temp+=str[i];
    }
     if(temp.size()!=str.size())
     {
         temp=Remove(temp);
         return temp;
     }
     return temp;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    { string s;
      cin>>s;
       cout<<Remove(s);
       cout<<endl;
    }
}

