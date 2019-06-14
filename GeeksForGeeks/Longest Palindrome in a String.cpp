#include<bits/stdc++.h>
using namespace std;
void largestpal(string str)
{
    int n=str.size();
   bool table[n][n];
   memset(table,false,sizeof(table));
    //for length 1
   for(int i=0;i<n;i++)
   {
       table[i][i]=true;

   }
   //for length 2
   int start=0,maxlength=1;
   for(int i=0;i<n-1;i++)
   {
       if(str[i]==str[i+1])
            {
              table[i][i+1]=true;
              start=i;
                maxlength=2;
            }
   }
   //for greater than 2
   for(int k=2;k<n;k++)
   {
       //fix starting index

     for(int i=0;i<n-k;i++)
     {  //j ending index
         int j=i+k;
         if(str[i]==str[j]&&table[i+1][j-1]==true)
         {
              table[i][j]=true;
               if(k>maxlength)
                {maxlength=k;
                  start=i;
                }
         }

     }

   }


   for(int i=start;i<=maxlength+start;i++)
        cout<<str[i];


}
int main()
 {
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    largestpal(s);
    cout<<endl;

}
}
