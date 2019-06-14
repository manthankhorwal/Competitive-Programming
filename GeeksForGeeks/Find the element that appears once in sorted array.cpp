using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    map<int,int> m;
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int j;
	        cin>>j;
	        m[j]++;
	    }
	    for(auto it=m.begin();it!=m.end();it++)
	    {
	        if(it->second==1)
	          {
	              cout<<it->first;
	              break;
	          }
	    }
	    cout<<endl;
	    m.clear();
	}
}
