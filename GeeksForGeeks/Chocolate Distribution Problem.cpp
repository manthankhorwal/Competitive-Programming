#include<bitd/stdc++.h>
using namespace std;
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

        }sort(a,a+n);
        int m;
        cin>>m;
        vector<int> v;
        for(int i=0;i<n-m+1;i++)
        {
            v.push_back(a[i+m-1]-a[i]);
        }
        auto it=min_element(v.begin(),v.end());
        cout<<*it;
        cout<<endl;
        v.clear();
    }
}
