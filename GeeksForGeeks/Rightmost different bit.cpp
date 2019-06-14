#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
{
    int m,n,i=1;
    cin>>m>>n;
    if(m==n)
    {
        cout<<-1<<endl;

        continue;
    }
    while(n>0||m>0)
    {
        int rem1=m%2;
        int rem2=n%2;
        m/=2;
        n/=2;
        if(rem1^rem2==1)
          {
              cout<<i;
              break;
          }
          i++;
    }
    cout<<endl;

}
}
