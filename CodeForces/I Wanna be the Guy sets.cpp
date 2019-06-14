#include<bits/stdc++.h>
using namespace std;
main()
{
    set<int> level;
    int n,p,q;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++)
    {
        int w;
        cin>>w;
        level.insert(w);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int w;
        cin>>w;
        level.insert(w);
    }
     if(level.size()==n)
		  cout<<"I become the guy.";
	  else
		  cout<<"Oh, my keyboard!";

}
