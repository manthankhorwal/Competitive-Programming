#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,num=0;
        cin>>n;
        int a[n];
        int Count[61]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            Count[a[i]]++;

        }

        for(int i=0;i<61;i++)
        {
            if(Count[i]!=0)
                num++;
        }

        int* start=&Count[0];

         for(int i=0;i<num;i++)
         {
              int* End=max_element(Count,Count+61);
              int index=End-start;
              for(int j=0;j<Count[index];j++)
              cout<<index<<" ";
              Count[index]=0;
        }
        cout<<endl;
    }

}
