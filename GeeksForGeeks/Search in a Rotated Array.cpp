#include<iostream>
using namespace std;

int merge(int a[],int left,int right,int k)
{
    int mid=(left+right)/2;
    if(a[mid]==k)
         {
          return mid;

         }
   else if(left>right)
        return -1;
    else if(k<=a[mid])
    return merge(a,left,mid-1,k);
       else
      return merge(a,mid+1,right,k);

}

main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,rot;
      cin>>n;
      int a[n];
      int j;
      cin>>j;
      a[0]=j;                              //logic is searching will done considering two arrays
                                            //one from 0 to rot-1 and second is rot+1 to n
      for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<a[i-1])
                rot=i;            //rot contains address from where rotation is starting
        }
        int k;
        cin>>k;

       int result = merge(a,0,rot-1,k);   //   for first array
        if(result==-1)                 //if not found in first array
              result= merge(a,rot,n-1,k);//   second array;

        cout<<result;
cout<<endl;
  }

}
