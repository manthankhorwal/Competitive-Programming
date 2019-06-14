#include<iostream>
using namespace std;
main()
{
int n,m,cnt=0,k;
cin>>n>>m;
for(int i =0;i<n;i++){
if(i%2==0)
{
for(int j=0;j<m;j++)
{ cout<<"#";
 }cout<<endl;
}
else
  { if(cnt%2!=0){
     cout<<"#";
}
    for(k=0;k<m-1;k++){
      cout<<".";}
    if(cnt%2!=0)
     cout<<endl;
     if(cnt%2==0){
     cout<<"#"<<endl;
           }cnt++;

}
}
return(0);
}
