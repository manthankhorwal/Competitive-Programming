  Node* head=NULL;
  Node* save=NULL;
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
Node*  Merge(Node* head1,Node* head2)
{
     head=NULL;
     save=NULL;
    Node* temp1=head1;
    Node* temp2=head2;
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1->data<temp2->data)
          {
              Inserting(temp1->data);
              temp1=temp1->next;
          }
          else
          {
              Inserting(temp2->data);
              temp2=temp2->next;
          }
    }
       while(temp1!=NULL)

      {
          Inserting(temp1->data);
          temp1=temp1->next;
      }
       while(temp2!=NULL)

      {
          Inserting(temp2->data);
          temp2=temp2->next;
      }
     return head;

}
Node * mergeKList(Node *a[], int n)
{
    Node* temp;
    temp= Merge(a[0],a[1]);
    for(int i=2;i<n;i++)
{
    temp= Merge(temp,a[i]);

}
return temp;
}
