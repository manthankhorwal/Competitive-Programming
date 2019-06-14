#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> hash1;


        for(int i=0;i<n;i++)
        {
            int j;
            cin>>j;
            hash1[j]++;
        }
        for(int i=0;i<n;i++)
        {
               int j;
               cin>>j;
               hash1[j]--;
        }
        int sum=0;
        auto it=hash1.begin();
       for(;it!=hash1.end();it++)
       {
          if(it->second!=0)
          {
            cout<<"0";
            break;
          }

       }
       if (it==hash1.end())
        cout << "1";

        cout<<endl;


    }
}
