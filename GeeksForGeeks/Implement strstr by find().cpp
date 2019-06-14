#include<bits/stdc++.h>
using namespace std;
int strstr(string s, string x)
{
   int pos=s.find(x);
   return pos;
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
