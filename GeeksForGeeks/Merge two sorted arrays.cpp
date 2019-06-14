#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }
	    int i=0,j=0;
	    vector<int >v;
	    while(i<n&&j<m)
	    {
	        if(a[i]>b[j])
	        {
	            v.push_back(b[j]);
	            j++;

	        }
	        else
	        {v.push_back(a[i]);
	        i++;
	        }
	   }
     while(i<n)
     {v.push_back(a[i]);
     i++;

     }
     while(j<m)
     {
         v.push_back(b[j]);
         j++;

     }
     for(int x:v)
     cout<<x<<" ";
     cout<<endl;
	}
}
