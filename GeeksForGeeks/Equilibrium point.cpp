#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {int sum=0,j,b=0;
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];

        }


        j=sum;

        for(i=0;i<n;i++)
        {
            sum=j;
             b=a[i]+b;
            sum=sum-b-a[i+1];
            if(sum==b)
            {
                cout<<i+2;
                break;
            }
        }
        if(n==1)
            cout<<"1";
       else if(i==n)
                cout<<"-1";
        cout<<endl;

    }
}
