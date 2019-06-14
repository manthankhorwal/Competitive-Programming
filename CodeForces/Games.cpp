#include<iostream>
using namespace std;
main()
{
   int c,n,j=0,k=0,cnt=0;
   cin>>n;
  int home[n],guest[n],a[n*2];;

   for(int i=0;i<n*2;i++)
   {
       cin>>c;
       if(i%2==0)
       {
           home[j]=c;
           j++;
       }
       else{
        guest[k]=c;
       k++;
       }
       }
       for(int i=0;i<n;i++)
       {
        for(int f=0;f<n;f++)
        {
            if(home[i]==guest[f])
                cnt++;
        }
       }
       cout<<cnt;
}
