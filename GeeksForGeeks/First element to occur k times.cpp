#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;

    while(t--)
    {    unordered_map<int,int> m;
        int n,k,i,flag=1;
        cin>>n>>k;
        int a[n];
        for( i=0;i<n;i++)
        {
          cin>>a[i];
          m[a[i]]++;
         }

        for(int i=0;i<n;i++)
        {
            if(m[a[i]]==k)
              {
                 cout<<a[i];
                 flag=0;
                 break;
              }
        }

        if(flag==1)
            cout<<"-1";
            cout<<endl;
    }
}
