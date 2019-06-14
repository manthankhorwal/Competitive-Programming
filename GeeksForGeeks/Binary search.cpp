/*You need to complete this function */
int bin_search(int A[], int left, int right, int k)
{
  int m=(left+right)/2;
  if(A[m]==k)
  return m;
 else if(left>right)
  return -1;
  else if(k<A[m])
     bin_search(A,left,m-1,k);
     else
     bin_search(A,m+1,right,k);
}
