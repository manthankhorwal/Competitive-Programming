using namespace std;
main()
{
int t;
cin>>t;
while(t--)
{ long long int n;
  cin>>n;
int a;
   int two=0,z=0,o=0;
     for(long long i=0;i<n;i++)
    {   cin>>a;
         if(a==0)
         z++;
        if(a==1)
         o++;
        if(a==2)
        two++;
    }
      while(z--)
    {
        cout<<"0 ";
    }
       while(o--)
    {
        cout<<"1 ";
    }
    while(two--)
    {
        cout<<"2 ";
    }
    cout<<endl;
}

}
