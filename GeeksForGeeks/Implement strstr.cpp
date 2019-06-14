#include<bits/stdc++.h>
using namespace std;
int strstr(string s, string x)
{
  string st;
   int n=x.size();
      for(int i=0;i<s.size();i++)
      {
          st=s.substr(i,n);
          if(st==x)
            return i;
      }
      return-1;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,x;
        cin>>s>>x;

        cout<<strstr(s,x);
        cout<<endl;
    }

}
