#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    cin.ignore();         //is to be used to beffore using getline
    while(t--)
    {
      map<char,int> m;

      string s;
      getline(cin,s);

      for(int i=0;i<s.size();i++)
      {
          m.insert({s[i],1});           //making map of keys of char present in string and assgning value one to all of them


      }

      for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]!=0)                                    //if value not equals to zero print
            {
                cout<<s[i];                                   //print
                m[s[i]]=0;                                    //assigning zero so that does not get printed again
            }

        }

        cout<<endl;
    }
}
