#include<bits/stdc++.h>
using namespace std;
bool pairs(int a[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=(a[i]+a[j]);
           cout<<sum<<" ";
            if(sum%k==0)
                return true;
                }
    }
    return false;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(pairs(a,n,k))
            cout<<"True";
        else
            cout<<"False";
        cout<<endl;

}
}
