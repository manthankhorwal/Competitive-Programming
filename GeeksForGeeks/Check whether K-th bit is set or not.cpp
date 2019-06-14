#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	 while(t--)
	 {
	     int n,k;
	     cin>>n>>k;
	     while(n>0)
	     {
	         int rem=n%2;
	         n/=2;
	         if(k==0){
	             if(rem==1)
	              cout<<"Yes";
	              else
	              cout<<"No";
	              break;
	         }
	                k--;
	         }
	         cout<<endl;
	     }
	 }
