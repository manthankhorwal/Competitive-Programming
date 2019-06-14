Node* head2=NULL;
Node* save=NULL;
void Insert(int data)
{
    Node* newnode=new Node(data);
      newnode->data=data;
      newnode->next=NULL;
      if(head2==NULL)
      {
          head2=newnode;
          save=newnode;
      }
      save->next=newnode;
      save=newnode;

}
void Reverse(void)
{
    Node *current,*prev,*next;
    current=head2;
    prev=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head2=prev;
}

bool isPalindrome(Node *head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        Insert(temp->data);
    }
    Reverse();
    Node *temp1=head,*temp2=head2;
    while(temp1!=NULL)
    {
        if(temp1->data!=temp2->data)
        {
            return false;
        }
    }
    return true;


}
