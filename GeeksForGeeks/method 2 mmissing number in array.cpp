using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int A[n];
	    int sum= 0;
	    int total = n*(n+1)/2;
	    for(int j=0;j<n-1;j++){
	        cin>>A[j];
	        sum+=A[j];
	    }
	    cout<<total-sum<<endl;
	}




	return 0;
}
