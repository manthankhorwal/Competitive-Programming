#include <stdio.h>

int main() {
    int t, n,a[100],i,j,k,l=0;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        for(i=0;i<n;i++){
            int sum1 =0;
            int sum2 =0;
           // l=0;
            for(j=i;j<n;j++){
                sum1= sum1 + a[j];
            }
            for(k=0;k<=i;k++){
                sum2 =sum2 + a[k];
            }
        if(sum1==sum2){
            printf("%d\n", i+1);

            break;

            }
        }


        if(n==1)
            cout<<"1";
       else if(i==n)
                cout<<"-1";
        cout<<endl;

    }
	//code
	return 0;
}
