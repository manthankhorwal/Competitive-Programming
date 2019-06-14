#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int b[],int n,int m,int x)
{ int Count=0,flag=1;
    unordered_set<int >s;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
        s.insert(a[i]);
    for(int i=0;i<m;i++)
    {
        if(s.find(x-b[i])!=s.end()){
            v.push_back(make_pair(x-b[i],b[i]));
        Count++;
        }
    }
        sort(v.begin(),v.end());
        if(Count==0)
            cout<<"-1";
        else
        {
            for(int i=0;i<v.size();i++)
            {
         cout<<v[i].first<<" "<<v[i].second;
         if(i<v.size()-1)
            cout<<", ";

            }
        }

}
main()
{
    int t;
    cin>>t;
    while(t--)
    { 	    int n,m,x;
    cin>>n>>m>>x;int a[n];int b[m];
	    for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<m;i++)cin>>b[i];
	    solve(a,b,n,m,x);cout<<endl;


}
}
