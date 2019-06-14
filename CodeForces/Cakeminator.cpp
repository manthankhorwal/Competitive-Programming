#include<iostream>
using namespace std;
main()
{  int cnt1=0,cnt=0,r,c,i,j,sum1=0,sum2=0,l,k;
    cin>>r>>c;
    char a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {   cin>>a[i][j];
            if(a[i][j]=='.')
            {
                cnt++;
            }
        }
        if(cnt==c)
        sum1=sum1+cnt;
        cnt=0;
    }
for(k=0;k<c;k++)
    {
        for(l=0;l<r;l++)
        {
            if(a[l][k]=='.')
            {
                cnt1++;
            }

        }
        if(cnt1==r)
            sum2=sum2+cnt1;
            cnt1=0;
    }

cout<<sum1+sum2-((sum1/c)*(sum2/r));
}
