using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v1,v2;

        for(int i=0;i<n;i++)
        {
               int j;
               cin>>j;
               v1.push_back(j);
        }
        for(int i=0;i<n;i++)
        {
               int j;
               cin>>j;
               v2.push_back(j);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
       if ( equal (v1.begin(), v1.end(), v2.begin()) )
        cout << "1";
    else
        cout<<"0";
        cout<<endl;


    }
}
