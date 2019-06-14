#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,binary=0,i=1;
    cin>>n;
    if(n==0)
    {
        cout<<0<<" "<<endl;
        continue;
    }
        while(n>0)
        {
            int rem=n%2;
             n/=2;
              if(rem==1)
              {
                 cout<<i;
                 break;
              }
              i++;
        }



        cout<<endl;
    }
}
