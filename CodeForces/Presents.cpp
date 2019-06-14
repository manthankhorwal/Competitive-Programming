#include<iostream>
using namespace std;
main()
{int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int b=1;
    for(int i=1;i<=n;i++)
    {
       if(a[i]==b)
       {
        cout<<i<<" ";
        b++;
        i=0;
       }
    }


}
