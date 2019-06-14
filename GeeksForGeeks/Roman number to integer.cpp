#include<bits/stdc++.h>
using namespace std;
int roman_to_int(string roman)
{int result=0;
    map<char,int> hmap;
    hmap['I']=1;
    hmap['V']=5;
    hmap['X']=10;
    hmap['L']=50;
    hmap['C']=100;
    hmap['M']=500;
    for(int i=0;i<roman.size();i++)
    {
         if(hmap[roman[i]]<hmap[roman[i+1]])
         {
             result+=hmap[roman[i+1]]-hmap[roman[i]];
             i++;
         }
         else
            result+=hmap[roman[i]];
    }
    return result;


}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
         int result= roman_to_int(s);
         cout<<result;
         cout<<endl;

    }
}
