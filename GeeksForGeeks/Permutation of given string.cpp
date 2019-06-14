#include<bits/stdc++.h>
using namespace std;
void permute(string s)
{
    sort(s.begin(),s.end());
    do
        cout<<s<<" ";
    while(next_permutation(s.begin(),s.end()));

}
main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        permute(s);
    }
}
