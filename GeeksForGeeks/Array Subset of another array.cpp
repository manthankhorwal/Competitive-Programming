#include<bits/stdc++.h>
using namespace std;
bool subset(map<long int,long int> &hash1,long int n2,long long int a[])
{

    for(long int i=0;i<n2;i++)
    {
        if(hash1[a[i]]!=1)
         return false;
    }
    return true;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long int n1,n2,j;
        map<long int,long int> hash1;
          cin>>n1>>n2;
          long long int a[n2];
        for(long int i=0;i<n1;i++)
        {
            cin>>j;
            hash1[j]=1;
        }
        for(long int i=0;i<n2;i++)
        {
            cin>>a[i];
        }
         if(subset(hash1,n2,a))
            cout<<"Yes";
             else
                cout<<"No";

cout<<endl;

    }

}

