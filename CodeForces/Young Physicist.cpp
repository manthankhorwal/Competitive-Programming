include<iostream>
using namespace std;
bool sumvector()
{
    int n,x1=0,y1=0,z1=0,in,sumx=0,sumy=0,sumz=0;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        { cin>>in;
            if(j==0)
                {
            x[x1]=in;
          x1++;
                }
            if(j==1){
                y[y1]=in;
                y1++;
                }
                if(j==2){
                z[z1]=in;
                z1++;
                }
        }
    }
    for(int i=0;i<n;i++)
    {
        sumx+=x[i];
        sumy+=y[i];
        sumz+=z[i];
    }
    if(sumx==0&&sumy==0&&sumz==0)
        return true;
    else
        return false;
}
main()
{

 if(sumvector())
    cout<<"YES";
 else
    cout<<"NO";

}
