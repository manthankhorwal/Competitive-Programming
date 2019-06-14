#include<iostream>
using namespace std;
int main()
 {

	int t;
	cin>>t;
	while(t--)
	{
	   unsigned int n,ans;
	   cin>>n;
	   ans =(((n&0xAAAAAA)>>1)|((n&0x555555)<<1));
	 cout<<ans;
	 cout<<endl;
	}
}
