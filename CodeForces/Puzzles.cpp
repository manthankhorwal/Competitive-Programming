#include<bits/stdc++.h>
using namespace std;

main()
{int n,m;
cin>>n;
cin>>m;
int a[m];

for(int i=0;i<m;i++)
{
    cin>>a[i];

}
sort(a,a+m);

int small;
for(int i=0;i<=m-n;i++)
{
  int diff=a[n+i-1]-a[i];
  if(i==0)
   small=diff;
    if(small>diff)
    small=diff;
}
cout<<small;
}
