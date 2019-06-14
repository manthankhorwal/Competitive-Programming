#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int bin;
    cin>>bin;
    int i=0,num=0;
    while(bin>0)
    {
        int rem=bin%10;
        bin/=10;
        num=num+rem*pow(2,i);
        i++;
    }
    cout<<num;




}
