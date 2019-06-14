#include<bits/stdc++.h>
using namespace std;
main()
{int cnt=0;
    string s;
getline(cin,s);
for(int i=0;i<s.size();i++)
{
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        s.erase(i,i+2);

        }
}
cout<<s;

}
