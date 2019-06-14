#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    { int a[2]={0};
       long long int n;

        cin>>n;
        while(n>0)
        {
            int rem=n%2;
            n/=2;
            a[rem]++;

        }

        if(a[1]==1)
        {
            cout<<"Yes";

        }
        else
            cout<<"No";

    }
}
