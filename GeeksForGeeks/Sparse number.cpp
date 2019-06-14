using namespace std;
int main()
 { int t;
 cin>>t;

while(t--)
{
    int n;
    cin>>n;
    n=n&(n<<1);
    if(n==0)
    cout<<1;
    else
    cout<<0;
    cout<<endl;
}
}
