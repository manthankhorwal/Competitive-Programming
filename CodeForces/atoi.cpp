#include<bits/stdc++.h>
using namespace std;

main()
{int n;
 cin>>n;

    for(int j=0;j<n;j++)
    {
        string s;
    cin>>s;
  int k=0;
  vector<int> v;


    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='.')
        {
            v.push_back(i);

        }
    }
     while(k<v.size())
     {
         for(int i=v[k]+1;i<s.size();i++)
         {
             if(s[i]=='.')
                break;
             cout<<s[i];
         }
         k++;
         cout<<".";
     }
     for(int i=0;i<v[k-1];i++)
        cout<<s[i];
      cout<<endl;
     }

      }




