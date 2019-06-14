#include<bits/stdc++.h>
using namespace std;
main()
{
 int num;
 cin>>num;

 string s=to_string(num);
string s1=s;
 if(num>0)
 {
cout<<num;
 }
 else {
        int c=s.size()-1;

        s.erase(s.begin()+c);
      num=stoi(s);
      s1.erase(s1.begin()+(c-1));

int num1;
num1=stoi(s1);
if(num>num1)
    cout<<num;
else
    cout<<num1;

 }


}
