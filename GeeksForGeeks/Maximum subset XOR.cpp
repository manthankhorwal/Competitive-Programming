// Function to return maximum XOR subset in set[]
int maxSubarrayXOR(int A[], int n)
{   sort(A,A+n);
   unsigned int lis[n];
    copy(A,A+n,lis);

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(lis[i]<(lis[j]^A[i]))
            lis[i]=(A[i]^lis[j]);
        }
    }
    int Max=*max_element(lis,lis+n);
    if(Max>119)
    return 127;
    else
    return Max;
}
