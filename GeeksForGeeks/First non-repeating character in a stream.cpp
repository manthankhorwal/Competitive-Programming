#include<bits/stdc++.h>
using namespace std;
main()
{ int t;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
    unordered_map < char,int > m;
    queue<char> q;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        q.push(ch);
        m[ch]++;
      while(!q.empty())
        {
            if(m[q.front()]>1)
            q.pop();
            else
            {
                cout<<q.front()<<" ";
                break;
            }


       }
       if(q.empty())
        cout<<-1<<" ";

    }
    cout<<endl;
  }
}
