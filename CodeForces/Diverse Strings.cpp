#include<bits/stdc++.h>
using namespace std;
void sortString(string &str)
{int cnt=0;
   sort(str.begin(), str.end());

   for(int i=0;i<str.size();i++)
   {
       if((int)str[i]==((int)str[i+1]-1))
        cnt++;
        else
            continue;
   }
   if((cnt+1)==str.size())
    cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
}
main()
{

   string s;
   int n;
int c=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>s;

       sortString(s);





   }

}
