Node* reverseList(Node *head)
{
  struct Node *prev,*current,*next;
  prev=NULL;
  current=head;
  while(current!=NULL)
  {
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;

  }
  head=prev;
  return head;

}
