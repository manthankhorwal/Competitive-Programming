#include<iostream>
using namespace std;
main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int notes[10]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000} ;
        int n=9,num;
        cin>>num;

        while(num!=0)
        {  if(num==1)
        {
            cout<<"1";
            break;
        }
            if(num%notes[n]!=num)
            {
                for(int i=0;i<num/notes[n];i++)
                    cout<<notes[n]<<" ";

                num=num%notes[n];
                n--;
            }
            else
                n--;
        }

        cout<<endl;

    }
}
