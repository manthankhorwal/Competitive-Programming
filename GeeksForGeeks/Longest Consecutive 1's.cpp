#include<iostream>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i=0,Max=0,Count=0;
        while(n>=(1<<i))
        {
           int num=n|(1<<i);  //when or is considered,if one is present number will remain same
            if(num==n)     // so count if number is same after biit manipulation
                Count++;
            else
            {
                if(Count>Max)     //if zero is found
                    Max=Count;
                    Count=0;
            }
            i++;

        }
        cout<<(Max>Count?Max:Count)<<endl;
    }

}
