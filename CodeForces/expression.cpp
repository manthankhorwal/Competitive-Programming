#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b,c,ans,big;
    cin>>a>>b>>c;
   ans=a+b*c;
   big=ans;
   ans=a*(b+c);
   if(ans>big)
    big=ans;
   ans=a*b*c;
   if(ans>big)
    big=ans;
    ans=(a+b)*c;
    if(ans>big)
    big=ans;
    ans=a+b+c;
    if(ans>big)
    big=ans;
    cout<<big;

}
