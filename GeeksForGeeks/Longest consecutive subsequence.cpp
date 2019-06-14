#include<bits/stdc++.h>
using namespace std;
main()
{  int t;
cin>>t;
while(t--)
{
     long long int n,m=0;
       cin>>n;
    long long int a[n];
   long long int Count=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(long long int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
            continue;
        if(a[i+1]-a[i]==1)
            Count++;
        else
           {
             if(Count>m)
                 m=Count;
           Count=0;
           }


    }
    int c=max(Count,m);

           cout<<c+1;
     cout<<endl;
}

}
