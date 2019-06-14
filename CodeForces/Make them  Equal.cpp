#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a;

set<int> s;
    for(int i=0;i<n;i++)
    {
       int a;
       cin>>a;
        s.insert(a);

    }
    vector<int> v(s.size());
    copy(s.begin(),s.end(),v.begin());


    if(v.size()<=3)
    {
        if(v.size()==1)
        {
            cout<<"0";
            return(0);
        }
        if(v.size()==2)
        {
            if(v[0]%2==0&&v[1]%2==0)
        cout<<(v[0]+v[1])/2-v[0];
    else if(v[0]%2!=0&&v[1]%2!=0)
         cout<<(v[0]+v[1])/2-v[0];
   else if(v[0]%2==0&&v[1]%2!=0||v[0]%2!=0&&v[1]%2==0)
        {
            cout<<v[1]-v[0];
        }
        return(0);
        }
        if((v[0]+v[2])/2==v[1])
            if(v[1]-v[0]==v[2]-v[1])
            cout<<abs(v[1]-v[0]);
              else
                cout<<"-1";
        else
            cout<<"-1";
    }
    else
        cout<<"-1";
}
