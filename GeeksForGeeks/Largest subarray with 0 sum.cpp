 //Function question
int maxLen(int A[],int n)
{int len=0,max_len=0,sum=0;
  for(int i=0;i<n;i++)
  {sum=A[i];
    for(int j=i+1;j<n;j++)
    {   sum+=A[j];
         len=j-i+1;
    if(sum==0&&len>max_len)
       max_len=len;
    }
  }
  return max_len;
}
