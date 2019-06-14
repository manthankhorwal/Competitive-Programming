#include<bits/stdc++.h>
using namespace std;

main()
{ vector<int> v;
    int t;
    cin>>t;
    while(t--)
   { int n,k;
   vector<int> v;

   cin>>n>>k;
   int h=n;
     for (int i = 0; i < n; i++)
       { int j;
       cin>>j;
         v.push_back(j);
       }
       if(k>n)
          for(int i=n-1;i>=0;i--)
             cout<<v[i]<<" ";
     else
     {

       int c=n%k;
       n=n-c;


      for(int i=0;i<n;i=i+k)
           reverse(v.begin() + i, v.begin() + i+k);


       vector <int> :: iterator it;

    for (it = v.begin(); it != v.end()-c; it++)
       cout << (*it) << " ";
       for(int i=h-1;i>=h-c;i--)
        cout<<v[i]<<" ";



    }
      v.clear();
      cout<<endl;
      }
}
