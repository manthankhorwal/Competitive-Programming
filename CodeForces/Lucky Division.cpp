#include <iostream>
#include<sstream>
using namespace std;
int main()
{  string s;
    cin>>s;
stringstream geek(s);
int a=0,i;
geek>>a;
  for(i=0;i<s.size();i++)
    {
        if(s[i]!='4'&&s[i]!='7')
        {
          if(a%4==0||a%7==0||a%47==0){
            cout<<"YES";
            break;
          }
            else{
            cout<<"NO";
            break;
            }
          }
      }
      if(i==s.size())
    cout<<"YES";
}
