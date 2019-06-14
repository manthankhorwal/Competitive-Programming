#include<iostream>
using  namespace std;
main()
{ int t;
cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
            int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
            if(n%2==0)
            {
              for(int i=1;i<n;i+=2)
        {
            if(a[i]<a[i-1])
                swap(a[i],a[i-1]);
                if(!(i==n-1))
                {
                  if(a[i]<a[i+1])
                swap(a[i],a[i+1]);
                }
        }
            }
        else{
        for(int i=1;i<n;i+=2)
        {
            if(a[i]<a[i-1])
                swap(a[i],a[i-1]);

            if(a[i]<a[i+1])
                swap(a[i],a[i+1]);
        }
        }
        for(int x:a)
            cout<<x<<" ";
        cout<<endl;
    }
}
