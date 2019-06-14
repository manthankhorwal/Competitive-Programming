#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];

    }
 int lis[n];
    copy(A,A+n,lis);
int Max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(Max<(A[j]^A[i]))
              {Max=(A[i]^A[j]);

              }
        }
    }
    cout<<Max;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(lis[i]<(lis[j]^A[i]))
              {int num=(A[i]^lis[j]);
                  lis[i]=num;
              }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<lis[i]<<" ";

    }


}
