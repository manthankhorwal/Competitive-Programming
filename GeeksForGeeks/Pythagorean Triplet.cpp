#include<bits/stdc++.h>
using namespace std;
bool triplet(int a[],int n)
{
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
            if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
                  return true;
                  if(a[i]+a[j]<=a[k])
                    break;

            }
        }

    }
    return false;
}
main()
{ int t;
cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        if(triplet(a,n))
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;

    }
}
