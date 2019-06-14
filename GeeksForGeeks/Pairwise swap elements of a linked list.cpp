void pairWiseSwap(struct node *head)
{ int Count=0;
     node* temp=head;
      node* temp1=NULL;
      while(temp!=NULL)
      {
          Count++;                          //Count the number of nodes
          temp=temp->next;
      }
      temp=head;
      int n=Count/2;
  while(n--)                           //we have to swap for pairs so run loop for Count/2
  {
      temp1=temp->next;                //to access next node of temp
      swap(temp->data,temp1->data);
      if(n>0)                           //this conditon is required because after swapping last pair
      {                                //this will access some unknown addresses which gives segment fault

      temp=temp->next->next;             //to  make temp to go to next pair

      }
      }
}
