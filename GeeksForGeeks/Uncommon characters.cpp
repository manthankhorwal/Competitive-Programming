#include<bits/stdc++.h>
using namespace std;
main()
{

    int t;
    cin>>t;
    while(t--)
    {

        string str1,str2;
        cin>>str1>>str2;
      map<char,int> m;
        set<char> s1(str1.begin(),str1.end());
        set<char> s2(str2.begin(),str2.end());
        vector<char>  v1(s1.begin(),s1.end());
        vector<char>  v2(s2.begin(),s2.end());
        for(int i=0;i<v1.size();i++)
        {
            m[v1[i]]++;
        }
        for(int i=0;i<v2.size();i++)
        {   if(m[v2[i]]>0)
            m[v2[i]]=0;
            else
                m[v2[i]]--;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {   if(it->second!=0)
            cout<<it->first;
        }
        cout<<endl;
    }
}
