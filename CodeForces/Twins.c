#include<iostream>
using namespace std;
\
main()
{
    int n;
    cin>>n;
    int d=0;
    int b=0;
    int c[n];int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        sum=sum+c[i];

    }

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(c[j+1]>c[j])
                swap(c[j+1],c[j]);
            }

        }

        int i=0;

        while(i<n)
        {
            d=d+c[i];
            b=sum-d;
            if(d>b)
            {
                cout<<(i+1);
                return(0);
            }
                 i++;

        }

}
