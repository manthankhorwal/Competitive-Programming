#include<iostream>
using namespace std;
main()
{
int a[5][5];
int b,i,j; int c;
 for(i=0;i<5;i++)
 {
     for(j=0;j<5;j++)
     {
         cin>>a[i][j];
         if(a[i][j]==1)
         {  b=i;
            c=j;}
     }
 }

 if(b==2&&c==2)
 {
     cout<<"0";
 }
 else if(b<=2&&c<=2)

     {
         b=2-b;
         c=2-c;
         cout<<(b+c);
     }
    else if(b>=2&&c>=2)
     {
         b=b-2;
         c=c-2;
          cout<<(b+c);
     }
    else if(b<=2&&c>=2)
     {
         b=2-b;
         c=c-2;
          cout<<(b+c);
     }
     else if(b>=2&&c<=2)
     {
         b=b-2;
         c=2-c;
      cout<<(b+c);
     }
}
