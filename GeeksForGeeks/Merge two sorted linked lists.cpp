Node* head3=NULL;         //for creating new linked list
Node* save=NULL;
void Inserting(int data)          //insert new node in new list
{ Node* newnode=new Node(data);
   newnode->data=data;
   newnode->next=NULL;
    if(head3==NULL)
    {
        head3=newnode;
        save=newnode;
        return;

    }
    save->next=newnode;
    save=newnode;


}
Node* sortedMerge(Node* head1,   Node* head2)
{
head3=NULL;
  Node *temp1=head1,*temp2=head2;
      temp1=head1;
      temp2=head2;
      while(temp2!=NULL&&temp1!=NULL)
      {                                                 //insert new nodes in sorted manner in new list
          if(temp1->data>=temp2->data)
          {
              Inserting(temp2->data);
              temp2=temp2->next;

          }
          else
          {                                             //this while is gonna end if one the list gets to end
              Inserting(temp1->data);

              temp1=temp1->next;
          }

      }
      while(temp1!=NULL)
                                                  //these loops will insert the remaining elements in list
      {
          Inserting(temp1->data);
          temp1=temp1->next;
      }
       while(temp2!=NULL)

      {
          Inserting(temp2->data);
          temp2=temp2->next;
      }

      return head3;                        //simply return the new list
}
