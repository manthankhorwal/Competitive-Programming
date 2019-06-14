#include<iostream>
using namespace std;

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<"No";
            continue;
        }

       if(!(n&(n-1)))
        cout<<"YES";
       else
        cout<<"NO";
    }
    cout<<endl;
}
