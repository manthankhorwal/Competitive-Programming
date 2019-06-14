#include<iostream>
using namespace std;
main()
{
    int n,d,t,i,joke=1,sum=0;
    cin>>n>>d;
    int song[n];
    for(int i=0;i<n;i++)
    {
       cin>>song[i];
       sum=sum+song[i];
    }
    if(d-sum<5&&(d-sum)>=0)
    {
        cout<<"0";
        return(0);
    }

    int Break=10*(n-1);
    joke=joke+Break/5;
    if(sum+joke*5>=d){
    while(sum+joke*5!=d){
      joke--;
            if(joke==0)

                break;
}
}
else
   joke=joke+(d-(sum+joke*5))/5;

if(joke==0)
        cout<<"-1";
    else
    cout<<joke;
}
