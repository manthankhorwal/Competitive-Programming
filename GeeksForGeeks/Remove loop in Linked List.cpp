void removeTheLoop(Node *head)
{


    Node* temp=head;
    Node* prev;
    map<Node*,int> m;
    while(temp!=NULL)
    {
        if(m[temp]>0)                                     //here prev is keeping address of prev node
                                                          //just here when we find node we access the prev node
                                                          //from which loop is started the change its next to NULL to
                                                          //remove the connection and remove the loop
         {prev->next=NULL;
         break;}
        else
         m[temp]++;
         prev=temp;
         temp=temp->next;

    }



}
