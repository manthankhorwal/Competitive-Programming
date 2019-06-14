#include<iostream>
using namespace std;
int heap_size=0;
int cap;
int capacity;
int* heap =new int();
int parent(int i)
{
    return (i-1)/2;
}
Insert(int k)
{
    heap_size++;
    int i=heap_size-1;
    heap[i]=k;
  while(i!=0&&heap[i]<heap[parent(i)])
  {
      swap(heap[i],heap[parent(i)]);
      i=parent(i);
  }
}
int getmin()
{
    return heap[0];
}
Minheapify(int i)
{
    int l=2*i+1;
    int r=2*i+2;
    int smallest=i;
    if(l<heap_size&&heap[l]<heap[i])
        smallest=l;
    if(r<heap_size&&heap[r]<heap[smallest])
        smallest=r;
    if(smallest!=i)
       {
         swap(heap[smallest],heap[i]);
         Minheapify(smallest);
       }
}
Delete(int i)
{
  heap[i]=INT_MIN;
  while(i!=0&&heap[parent(i)]>heap[i])
  {
      swap(heap[parent(i)],heap[i]);
      i=parent(i);
  }

  heap[0]=heap[heap_size-1];
  heap_size--;
  Minheapify(0);
}

main()
{
    cap=11;
    capacity=cap;

    Insert(2);
    Insert(4);
    Insert(8);
    Insert(1);
    Insert(24);
    Insert(23);
    for(int i=0;i<heap_size;i++)
        cout<<heap[i]<<" ";

    Delete(4);
     for(int i=0;i<heap_size;i++)
        cout<<heap[i]<<" ";




}
