#include<bits/stdc++.h>
using namespace std;
main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,j;
        cin>>n1>>n2;
        int a[n2];
        map<int,int> m;
        for(int i=0;i<n1;i++)
        {
            cin>>j;
            m[j]++;                                                          //Counting of elements
        }
        for(int i=0;i<n2;i++)
        cin>>a[i];

        for(int i=0;i<n2;i++)
        {
            for(int j=0;j<m[a[i]];j++)
                cout<<a[i]<<" ";                                          //Printing according to second arrray order
                m[a[i]]=0;                                                       //Putting count zero for printed elements
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second!=0)
            {
                for(int i=0;i<it->second;i++)                               //printing remaining number
                    cout<<it->first<<" ";
            }
        }
       cout<<endl;
    }
}
