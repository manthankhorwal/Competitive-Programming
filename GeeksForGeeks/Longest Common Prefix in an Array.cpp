#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
       {

       int n,Count=0,length;
       vector<int> v;
        cin>>n;
        char s[n][1000];

           for(int i=0;i<n;i++)
               cin>>s[i];
        if(n==1)
        {
            cout<<s[0]<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++)
        {Count=0;
                if(strlen(s[i])>strlen(s[i+1]))
                    length=strlen(s[i+1]);
                else
                    length=strlen(s[i]);
            for(int j=0;j<length;j++)
            {
                if(s[i][j]==s[i+1][j])
                {
                    Count++;
                }
                else
                    break;
            }
            v.push_back(Count);
            if(Count==0)
            {
                cout<<"-1";
                break;
            }
        }
          auto it=min_element(v.begin(),v.end());
        for(int i=0;i<*it;i++)
        {
            cout<<s[0][i];
        }
        cout<<endl;

    }

}
