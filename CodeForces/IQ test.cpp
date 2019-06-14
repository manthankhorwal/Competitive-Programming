#include<iostream>
using namespace std;
main()
{
    int n,e=0,o=0,adde,addo;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
           adde=i;
        }
        else
        {
            o++;
            addo=i;
        }
    }
    if(e==1)
        cout<<adde+1;
    else
        cout<<addo+1;
}
