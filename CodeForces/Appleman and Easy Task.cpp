#include<iostream>
using namespace std;
main()
{
    int n,cnt=0;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }

    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {


                   if(a[i][j-1]=='o'&&(j-1)>=0)
                    {cnt++;
                    }

                      if(a[i-1][j]=='o'&&(i-1)>=0)
                   {     cnt++;
                    }

                    if(a[i+1][j]=='o'&&(i+1)<n)
                    {cnt++;
                    }
                    if(a[i][j+1]=='o'&&(j+1)<n)
                    {
                        cnt++;
                    }

                   if(cnt%2!=0)
                   {  cout<<"NO";
                       return(0);
                       }

              }
              cnt=0;




    }
    cout<<"YES";

}
