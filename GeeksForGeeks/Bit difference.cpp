#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,Count=0;
        cin>>n>>m;

        while(n>0||m>0)
        {
            int rem1=n%2;
          n/=2;
          int rem2=m%2;
          m/=2;
          if(rem1^rem2==1)
            Count++;

        }
        cout<<Count;
        cout<<endl;
    }

}
