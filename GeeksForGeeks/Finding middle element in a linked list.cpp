int getMiddle(Node *head)
{
    if(head==NULL)
    return -1;
 struct Node *temp=head;
  int Count=0;
  while(temp!=NULL)
  {
      Count++;
      temp=temp->next;

  }
  temp=head;
  for(int i=0;i<Count/2;i++)
  {
      temp=temp->next;
  }
  return temp->data;
}
