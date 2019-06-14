#include<bits/stdc++.h>
using namespace std;
main()
{ int t;
cin>>t;
    while(t--)
    {
        int n,i,k,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
            for(i=1;i<n;i++)
            {
                int *it=max_element(a,a+i);
                int *it2=min_element(a+i+1,a+n);
                if(a[i]>=*it&&a[i]<=*it2)
                {
                cout<<a[i]<<endl;
                break;
                }
            }

    }
}
