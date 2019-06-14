#include<bits/stdc++.h>
using namespace std;
void printMax(int a[],int n,int k)
{ int i;
    deque<int> qi;

    for(i=0;i<k;i++)
    {
         while((!qi.empty()&&a[i]>=a[qi.back()]))
                qi.pop_back();

               qi.push_back(i);
    }
    for(;i<n;i++)
    {
        cout<<a[qi.front()]<<" ";

        while((!qi.empty()&&qi.front()<=i-k))
            qi.pop_front();

        while ((!qi.empty()) && a[i] >= a[qi.back()])
            qi.pop_back();

            qi.push_back(i);
    }
    cout<<a[qi.front()]<<" ";
}
main()
{
    int t;
    cin>>t;
    while(t--)
   {

   int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    printMax(a,n,k);
     cout<<endl;
}}
