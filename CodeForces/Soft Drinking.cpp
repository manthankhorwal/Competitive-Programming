#include<bits/stdc++.h>
using namespace std;
main()
{

    int n,k,l,c,d,p,nl,np;
    set<int> s;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    s.insert(k*l/nl);
    s.insert(c*d);
    s.insert(p);
    auto it=s.begin();
    cout<<*it/n;

}
