void rotate(struct node **head_ref, int k)
{
 node* head1;
 head1=*head_ref;                   //to get the head pointer
  node* temp=head1;
   while(temp->next!=NULL)
   {
       temp=temp->next;               //to get address of last node
   }

   temp->next=head1;
   node* middle=head1;
int step=0;
   while(step!=k-1)
   {
        middle=middle->next;          //to get data of last node of k size linked list
       step++;
   }

   head1=middle->next;
   middle->next=NULL;

   *head_ref=head1;
}
