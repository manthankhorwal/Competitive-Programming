#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,Count=0;
        cin>>n;
        while(n>0)
        {
            n=n&(n<<1);
            Count++;
        }
        cout<<Count<<endl;
    }

}
