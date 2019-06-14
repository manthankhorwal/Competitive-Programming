#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int k=0,test=0;
        cin>>s;
        vector<int> v;

        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='.')
                v.push_back(i);          //push all the address of dots in vector v with decreasing order means last dot address push_back first

       }
       if(v.size()==0)
       {cout<<s;
          test++;                //test is used if string has no dots print whlole string as it is and move to next test case
       }
       if(test==0)
       {


       while(k<v.size())
       {

       for(int i=v[k]+1;i<s.size();i++)
       {
           if(s[i]=='.')
            break;                                        //to print value between the dots
           cout<<s[i];
       }
       cout<<".";
       k++;
       }
       for(int i=0;i<v[v.size()-1];i++)              //to print string after last dot
        cout<<s[i];
    }
    cout<<endl;
    }

}
