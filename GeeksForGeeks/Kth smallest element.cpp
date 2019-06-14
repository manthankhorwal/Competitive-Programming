#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        //we cant sort in this question because time comp. is to provide is O(n)
        //so the idea is we can make a array of name h whose indexing will give so sorting like 0,1,2,3...

        int h[100000]={0};
        for(int i=0;i<n;i++){
        cin>>a[i];
            h[a[i]]++;   //we can increase the count on this input number indexing
        }
        int k;
        cin>>k;
        for(int i=1;i<=100000;i++){
            if(h[i]>=1)
            k--;
            if(k==0){
            cout<<i<<endl;
            break;}
        }

    }
	//code
	return 0;
}
