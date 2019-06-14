#include<bits/stdc++.h>
using namespace std;
int main()
 {
int t;
cin>>t;

while(t--)
{
    int n;
    cin>>n;
    int a[n],b[n];
    vector<int> v;
    for(int i=0;i<n;i++)
     {
           cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
           cin>>b[i];
     }
     int i=0,j=0;
    while(i<n&&j<n)
    {
        if(a[i]>b[j])
        {
            v.push_back(b[j]);
            j++;
        }
        else
        {
            v.push_back(a[i]);
            i++;
        }

    }

    while(i<n)
    {
        v.push_back(a[i]);
        i++;
    }
    while(j<n)
    {
        v.push_back(a[j]);
        j++;
    }

    cout<<v[n-1]+v[n];
cout<<endl;
}

}
