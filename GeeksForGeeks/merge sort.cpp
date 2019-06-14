void merge(int a[], int l, int mid, int r)
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
