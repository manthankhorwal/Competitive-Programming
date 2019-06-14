#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,j=0,cnt=0,pi,qi;
    cin>>n;

cin>>pi;
int p[pi],all[2*pi+5];
    for(int i=0;i<pi;i++)
    {
        cin>>p[i];
        all[j]=p[i];
        j++;
    }
    cin>>qi;
    int q[qi];
    for(int i=0;i<qi;i++)
    {
        cin>>q[i];
        all[j]=q[i];
        j++;
    }
    int f=1;
    sort(all,all+j);
    for(int i=0;i<j;i++)
    {
        if(all[i]==f)
        {
            cnt++;
            f++;
        }
    }
    if(n==cnt)
        cout<<"I become the guy";
        else
        cout<<"Oh, my keyboard!";

}
