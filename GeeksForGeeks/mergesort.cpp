#include<iostream>
using namespace std;
void Merge(int a[],int l,int mid,int r)
{
     int n1=mid-l+1;
     int n2=r-mid;
int temp1[n1],temp2[n2];
     for(int i=0;i<n1;i++)
     {
         temp1[i]=a[i+l];
     }
     for(int j=0;j<n2;j++)
     {
         temp2[j]=a[mid+1+j];
     }
     int i=0,j=0,k=l;
     while(i<n1&&j<n2)
     {
         if(temp1[i]<=temp2[j])
         {
             a[k++]=temp1[i++];
         }
         else
         {
             a[k++]=temp2[j++];
         }
     }
     while(i<n1)
        {
            a[k++]=temp1[i++];
        }
        while(j<n2)
        {
             a[k++]=temp2[j++];
        }


}

void mergesort(int a[],int l,int r)

{
    if(l<r)
    { int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        Merge(a,l,mid,r);
    }
}

main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {

      cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
