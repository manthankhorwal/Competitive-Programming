#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,binary=0,i=1;
    cin>>n;

        while(n>0)
        {
            int rem=n%2;
             n/=2;
              binary=binary+rem*i;
              i=i*10;
        }
     cout<<binary;
   cout<<(40>>1);


        cout<<endl;
    }
}
