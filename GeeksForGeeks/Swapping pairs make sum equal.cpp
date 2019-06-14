#include<bits/stdc++.h>
using namespace std;
int Swap(int* A,int* B,int n1,int n2){
    int sum1=0,sum2=0,i,j;
    for(i=0;i<n1;i++){
        sum1+=A[i];
    }
    for(i=0;i<n2;i++){
        sum2+=B[i];
    }
    int diff=abs(sum1-sum2);

    i=0;
    j=0;
    while(i<n1 and j<n2){
        if(abs(A[i]-B[j])==diff/2){
            return 1;
        }
        else if(A[i]>B[j])
        i++;
        else
        j++;
    }
    return -1;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int i,j;

        int n1,n2;
        cin>>n1>>n2;
           int a[n1],b[n2];
        for(i=0;i<n1;i++)
        {
        cin>>a[i];

        }
        for(i=0;i<n2;i++)
        {
        cin>>b[i];


        }
        cout<<Swap(a,b,n1,n2);
        cout<<endl;
}}
