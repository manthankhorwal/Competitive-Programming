#include<bits/stdc++.h>
using namespace std;
#include<stack>

main()
{
    int t;
    cin>>t;
    while(t--)
    { stack<pair<long long int,long long int > > s;

        long long int n,i;
        cin>>n;
        long long a[n],ans[n];
        memset(ans,-1,sizeof(ans));

         for(i=0;i<n;i++)
            cin>>a[i];
         s.push(make_pair(0,a[0]));
         for(i=1;i<n;i++)
         {
             if(a[i]<s.top().second)
                s.push(make_pair(i,a[i]));
                else
                {
                    while(!s.empty()&&s.top().second<a[i])
                    {
                        ans[s.top().first]=a[i];
                        s.pop();
                    }
                    s.push(make_pair(i,a[i]));
                }

         }
       /*   while(!s.empty())
         {
             ans[s.top().first]=-1;
             s.pop();
         }
         */
         for(int i=0;i<n;i++)
         {
             cout<<ans[i]<<" ";
         }
         cout<<endl;
    }
}
