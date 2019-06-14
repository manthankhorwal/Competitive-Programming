#include<bits/stdc++.h>
using namespace std;
bool subset(int a[],int n)
{ sort(a,a+n);
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
        if(m[a[i]]>1)
            return true;
    }
    int sum=0,sum1=0;
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i];
        for(int j=i+1;j<n;j++)
        {
            sum1+=a[j];
            if(sum==sum1)
                return true;

        }
        sum1=0;
    }
    return false;
}
main()
{
int t;
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
   if(subset(a,n))
    cout<<"YES";
   else
    cout<<"NO";


}
}
