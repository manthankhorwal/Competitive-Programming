#include<iostream>
using namespace std;
main()
{
    int n,v,k,i,cnt=0;
    cin>>n>>v;
    int b[n];
    for(i=0;i<n;i++)
    {
        cin>>k;
        int a[k];
        for(int j=0;j<k;j++)
        {
            cin>>a[j];

        }
    for(int x=0;x<k;x++)
        {
          if(a[x]<v)
          { b[cnt]=i+1;
              cnt++;
              break;

          }
        }
}
cout<<cnt<<endl;
for(i=0;i<cnt;i++)
    cout<<b[i]<<" ";
}
