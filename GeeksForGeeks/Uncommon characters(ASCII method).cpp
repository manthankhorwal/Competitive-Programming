#include<bits/stdc++.h>
using namespace std;
main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int hash1[26]={0},hash2[26]={0};
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.size();i++)
        {
            hash1[s1[i]-97]++;
        }
        for(int i=0;i<s2.size();i++)
        {
            hash2[s2[i]-97]++;
        }
        for(int i=0;i<25;i++)
        {
            if(hash1[i]!=0||hash2[i]!=0)
                if(hash1[i]==0||hash2[i]==0)
            {
                int c=i+97;
                cout<<(char)c;
            }
        }
        cout<<endl;
    }
}
