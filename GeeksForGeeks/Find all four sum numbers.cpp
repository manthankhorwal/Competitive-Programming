#include<bits/stdc++.h>
using namespace std;
main()

{
    	int t;cin>>t;
	while(t--){
	    int n,x;cin>>n>>x;
	    int arr[n];unordered_map<string,int> m1;
	    for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    string curr="";
	    for(int i=0;i<n-3;i++){
	        for(int j=i+1;j<n-2;j++){
	            for(int k=j+1;k<n-1;k++){
	                for(int l=k+1;l<n;l++){
	                    if(arr[i]+arr[j]+arr[k]+arr[l]==x){
	                        curr = to_string(arr[i])+to_string(arr[j])+to_string(arr[k])+to_string(arr[l]); //to avoid printing for duplicate numbers
	                        if(m1[curr]==0){
	                            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<" "<<"$";
	                            m1[curr]++;

	                        }
	                    }
	                }
	            }
	        }
	    }
	    if(curr=="")cout<<-1<<endl;
	    else cout<<endl;
	}
}
