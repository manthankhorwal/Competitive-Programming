#include<bits/stdc++.h>
using namespace std;
main()
{
    int y,small,n,*c;
    cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   c=max_element(a,a+n);
   cout<<*c;

}
