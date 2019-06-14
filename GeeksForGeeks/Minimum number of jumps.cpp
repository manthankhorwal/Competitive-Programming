#include<iostream>
using namespace std;
int jump(int* a,int n)
{
  int jump=1;
  int maxreach=a[0];             // stores the maximum index we can reach
  int step=a[0];                 //stores the number of steps we can take

  if(a[0]==0)
    return -1;                         //if 0 we cannot move forward


  for(int i=1;i<n;i++)
  {
      if(i==n-1)
    return jump;
      if(i+arr[i]>maxreach)
            maxreach=i+arr[i];    //stores the maximum index we can can reach

    step--;
    if(step==0)
       {                 //if steps is zero ,means we reached to last point of selected maxreach

       jump++;               //and we havve to take a jump
        if(i >= maxreach)   //if we end up at zero in bwteen
                return -1;

    step=maxreach-i;      //by moving forward one by one we have to decrease step
}
  }
  return -1;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<jump(a,n);
        cout<<endl;

    }
}
