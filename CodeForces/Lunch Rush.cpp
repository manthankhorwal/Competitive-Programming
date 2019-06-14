#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,f,t;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>f>>t;
        if(k>=t)
            a[i]=f;
        else
        a[i]=f-(t-k);
        }
        int* c;
        c=max_element(a,a+n);
        cout<<*c;

}

