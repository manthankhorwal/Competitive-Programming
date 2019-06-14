#include<iostream>
using namespace std;
main()
{int i,j,cnt0=0,cnt1=0;
    int n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            cnt0++;
        if(a[i]==1)
            cnt1++;
    }
int c=0;
int d=0;
for(int i=0;i<n;i++)
{
    if(a[i]==0)
        {c++;
        if(c==cnt0)
             {cout<<c+d;
            break;
            }

        }
        if(a[i]==1)
        {
            d++;
        if(d==cnt1)
            {cout<<c+d;
            break;
            }
        }
}


}
