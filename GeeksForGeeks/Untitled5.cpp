#include<bits/stdc++.h>
using namespace std;

main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n,num1=0,num2=0

        ;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)

            cin>>a[i];
         sort(a,a+n);
        for(int i=0;i<n;i++)
        {

            if(i%2==0)
                num1=num1*10+a[i];
            else
                num2=num2*10+a[i];
        }
        cout<<num1+num2;
        cout<<endl;
    }
}
