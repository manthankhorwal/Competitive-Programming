#include<bits/stdc++.h>
using namespace std;
main()
{
   int t,i;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       int a[n-1];
       for(i=0;i<n-1;i++)
       {
           cin>>a[i];
        }
        sort(a,a+n-1);
    for(i=0;i<n-1;i++)
       {

           if(a[0]==2)
           {
            cout<<"1"<<endl;
            break;}
            if(i>0)
            {
            if(a[i]-a[i-1]==2)
            {
                cout<<i+1<<endl;
                break;
            }

       }}
       if(i+1==n)
        cout<<n<<endl;

}}
