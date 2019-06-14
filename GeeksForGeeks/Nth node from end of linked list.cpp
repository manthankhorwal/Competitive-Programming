int getNthFromLast(Node *head, int n)
{
     int  Count=0;
    Node* temp=head;
    while(temp!=NULL)
    {
         Count++;                          //Count number of nodes
         temp=temp->next;
    }
    if(n>Count)                            //if asked value is greater than number of nodes ,doesnt exist return -1
    return -1;
    temp=head;
    for(int i =0;i<Count-n;i++)         //run the  loop till that required node
    {
        temp=temp->next;
    }
    return temp->data;       //and return its value
}

