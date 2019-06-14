#include<bits/stdc++.h>
using namespace std;
void leader(int arr[],int s)
{
   int Max=arr[s-1];
    vector <int> v;
    v.push_back(arr[s-1]);
    for(int i=s-2;i>=0;i--)
    {
        if(arr[i]>=Max)
        {v.push_back(arr[i]);
          Max=arr[i];
         }
             }
for(int i=v.size()-1;i>=0;i--)
            cout<<v[i]<<" ";

}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int s=sizeof(arr)/sizeof(arr[0]);
        leader(arr,s);
        cout<<"\n";
    }
}
