using namespace std;
main()
{
    int i,n,k=0,t;
    cin>>t;
    while(t--)
   {

   cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
 int max_so_far=INT_MIN;
 int max_ending_here=0;
 int s=0,start=0,End=0;
for(i=0;i<n;i++)
{
    if(a[i]<0)
        k++;

    max_ending_here= max_ending_here+a[i];
    if( max_so_far<max_ending_here)
    {
           max_so_far=max_ending_here;
           start=s;End=i;
    }
if(max_ending_here<0)
     {max_ending_here=0;
     s=i+1;
}

}

if(k==i)
{
   int* p=max_element(a,a+n);
   cout<<*p<<endl;
}
else
    cout<<max_so_far<<endl;


}
}

