#include<iostream>
using namespace std;

int parent (int i)
{
    return (i-1)/2;
}

void heapify(int heap[],int m,int i)
{
    int smallest=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    if(l<m&&heap[i]>heap[l])
       smallest=l;
    if(r<m&&heap[smallest]>heap[r])
       smallest=r;
    if(i!=smallest)
    {
        swap(heap[smallest],heap[i]);
        heapify(heap,m,smallest);
    }

}
void Delete(int heap[],int m,int k)
{
    heap[0]=k;
    heapify(heap,m,0);
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {


    int range,n;
    cin>>range>>n;
    int a[n],heap[range];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i<range-1)
            cout<<-1<<" ";

    }
copy(a,a+range,heap);
int m=range;

  for (int i = m/ 2 - 1; i >= 0; i--)

            heapify(heap, m, i);


cout<<heap[0]<<" ";
for(int i=range;i<n;i++)
{
    if(a[i]<heap[0])
        cout<<heap[0]<<" ";
    else
    {
        Delete(heap,m,a[i]);
        cout<<heap[0]<<" ";
    }
}

    cout<<endl;
    }

    }

