#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,k,c=0,sum=0;
    cin>>n>>k;
    int a[n],b[3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    int small;
    for(int i=0;i<n/3;i++)
    {
      for(int j=0;j<3;j++)
      {
          b[j]=5-a[c];
          if(j==0)
            small=b[j];
          if(small>b[j])
            small=b[j];
             c++;

      }

      if(small>=k)
          sum++;

    }
cout<<sum;
}
