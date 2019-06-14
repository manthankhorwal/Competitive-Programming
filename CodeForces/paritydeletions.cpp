#include<iostream>
using namespace std;
#include<algorithm>
#include<array>
#include<bits/stdc++.h>

main()
{
   int n;
   cin>>n;
   int a[n],even[n],odd[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];

    }
 for(int i=0;i<n-1;i++)
 {
     for(int j=0;j<n-1;j++)
     {
         if(a[j]>a[j+1])
         {
             int temp;
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
 }
 int e=0;
 int o=0;
  for(int i=0;i<n;i++)
   {
      if(a[i]%2==0)
      {
          even[e]=a[i];
          e++;
      }
      else
        {odd[o]=a[i];
        o++;
        }
    }
     int sum=0;
     if(e==o||e-o==-1||e-0==1)
        cout<<"0";
    else if(e>o)
    {
       int e1=e-o-1;
       for(int i=0;i<e1;i++)
        sum=sum+even[0];
       cout<<sum;
    }
    else if(e<0)
    {
               int o1=o-e-1;
       for(int i=0;i<o1;i++)
        sum=sum+odd[0];
       cout<<sum;
    }
    else if(o==0)
        cout<<odd[0];
    else if(e==0)
        cout<<even[0];


}






