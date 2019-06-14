#include<bits/stdc++.h>
using namespace std;
main()
{long long int n,k,num,pos,odd;
    cin>>n>>k;
     odd=(n+1)/2;
     if(k<=odd)
     {
         num=(2*k)-1;
     }
     else
        num=(k-odd)*2;
cout<<num;
}
