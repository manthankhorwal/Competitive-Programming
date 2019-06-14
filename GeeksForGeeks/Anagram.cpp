#include<bits/stdc++.h>
using namespace std;
bool anagram(string s1,string s2)
{
    int n1=s1.size();
        int n2=s2.size();
        if(n1!=n2)
            return false;
        map<char,int> m1;

        for(int i=0;i<n1;i++)
        {
            m1[s1[i]]++;

        }
        for(int i=0;i<n2;i++)
        {
            m1[s2[i]]--;
        }



      auto it=m1.begin();
      for(;it!=m1.end();it++)
      {
          if(it->second!=0)
          {
              return false;
          }
      }
      return true;


}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(anagram(s1,s2))
            cout<<"YES";
        else
            cout<<"NO";
 cout<<endl;
    }
}
