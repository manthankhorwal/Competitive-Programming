 Node* head=NULL;
  Node* save=NULL;
  int siz=0;
  int heap[1000];
  int parent(int i)
  {
      return (i-1)/2;
  }
 void Inserting(int data)
  {

     Node* newnode=new Node();
     newnode->data=data;
     newnode->next=NULL;
     if(head==NULL)
     {
         head=newnode;
         save=newnode;
     }
     save->next=newnode;
     save=newnode;

  }
  void Insert(int k)
  {
      siz++;
      int i=siz-1;
      heap[i]=k;


    // Fix the min heap property if it is violated
    while (i != 0 && heap[parent(i)] > heap[i])
    {
       swap(heap[i], heap[parent(i)]);
       i = parent(i);
    }
  }
void heapify(int i)
{int l = 2*i+1;
    int r = 2*i+2;
    int smallest = i;
    if (l < siz && heap[l] < heap[i])
        smallest = l;
    if (r < siz && heap[r] < heap[smallest])
        smallest = r;
    if (smallest != i)
    {
        swap(heap[i], heap[smallest]);
        heapify(smallest);
    }
}
void sortit()
{
    while(siz>0)
    {  Inserting(heap[0]);
        heap[0]=heap[siz-1];
        siz--;
        heapify(0);
    }
}

Node * mergeKList(Node *a[], int n)
{    head=NULL;
     for(int i=0;i<n;i++)
     {
         Node* temp=a[i];
         while(temp!=NULL)
         {
             Insert(temp->data);
             temp=temp->next;
         }
     }
  sortit();
return head;
}
