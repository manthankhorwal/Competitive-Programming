#include<bits/stdc++.h>
using namespace std;
main()
{
int t;
cin>>t;
while(t--)
{                                                  //logic here is for ex number is 6
    int n;
    cin>>n;                                        //we can take steps of 3 and plus simply 1
    unordered_map<int,int > dp;                    //because that one means another steps in with we are multiplying 3 with 2
    for(int i=1;i<=3;i++)
    {
        dp[i]=i;
    }
    for(int i=4;i<=n;i++)
    { if(i%2==0)
         dp[i]=dp[i/2]+1;
         else
            dp[i]=dp[i/2]+2;
    }
    cout<<dp[n];
    cout<<endl;
}

}

