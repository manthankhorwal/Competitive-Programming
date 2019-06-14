#include<iostream>
using namespace std;
int screen[100][100];
void floodfill(int x,int y,int& prevc,int& newc,int m,int n)
{
    if(x<0||x>n||y<0||y>m)
        return;                                                      //the logic here to find a number same
    if(screen[x][y]==newc)                                           //to prevc and change it with new as well as
        return;                                                      //recursively call for to check around prevc
    if(screen[x][y]!=prevc)
        return;
    else
        screen[x][y]=newc;
    floodfill(x+1,y,prevc,newc,m,n);  //for down
    floodfill(x,y+1,prevc,newc,m,n);  //for right
    floodfill(x-1,y,prevc,newc,m,n);  //for upper
    floodfill(x,y-1,prevc,newc,m,n);  //for left
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,newc,prevc;
         cin>>n>>m;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
                cin>>screen[i][j];
         }
         cin>>x>>y>>newc;
        prevc=screen[x][y];
        floodfill(x,y,prevc,newc,m,n);
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
                cout<<screen[i][j]<<" ";
         }
         cout<<endl;
    }

}
