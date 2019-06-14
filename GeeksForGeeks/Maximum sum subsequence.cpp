#include<bits/stdc++.h>
using namespace std;
int main()
 {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int Max=0;
      int a[n],lis[n];
      for(int i=0;i<n;i++)
             cin>>a[i];
            copy(a,a+n,lis);

            for(int i=1;i<n;i++)
            {
                for(int j=0;j<i;j++)
                {
                    if(a[i]>a[j]&&lis[i]<lis[j]+a[i])
                         {
                           lis[i]=lis[j]+a[i];
                           if(Max<lis[i])
                                Max=lis[i];
                         }
                }
            }
          cout<<Max;
            cout<<endl;
  }
	return 0;
}
