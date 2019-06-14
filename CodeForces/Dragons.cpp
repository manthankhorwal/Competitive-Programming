#include<bits/stdc++.h>
using namespace std;
main()
{
    int s,n,i,cnt=0;

    cin>>s>>n;
    int a[2*n];

for(i=0;i<n*2;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n*2;i+=2)
    {
        for(int j=0;j<n*2;j=j+2)
      {

       if(a[j]>a[j+2])
        {
          int temp;
          temp=a[j];
          a[j]=a[j+2];
          a[j+2]=temp;
          swap(a[j+1],a[j+3]);
        }
      }

    }
for(i=0;i<n*2;i=i+2)
    {
        if(s>a[i]){
            s=s+a[i+1];
       cnt=cnt+2;}
}

if(cnt==i)
    cout<<"YES";
else
    cout<<"NO";

}


