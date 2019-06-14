#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{int n;
   vector<int> v;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       int w;
       cin>>w;
       v.push_back(w);
   }
  auto it=unique(v.begin(),v.end());
//v.resize(distance(v.begin(), it);
for(int x:v)
    cout<<x<<" ";


    return 0;
}
