#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,o=0,d=0,th=0;
    cin>>n;
    int t[n];
    int one[n],two[n],three[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
   if(t[i]==1)
        {
            one[o]=i;
            o++;
        }
       else if(t[i]==2)
        {
            two[d]=i;
            d++;
        }
       else if(t[i]==3)
        {
            three[th]=i;
            th++;
        }
    }

int w=min({o,d,th});

cout<<w<<endl;

for(int i=0;i<w;i++)
{
    cout<<one[i]+1<<" "<<two[i]+1<<" "<<three[i]+1<<endl;
}


}
