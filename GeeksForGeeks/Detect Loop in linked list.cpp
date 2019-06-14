int detectloop(Node *head) {

    Node* temp=head;
    map<Node*,int> m;
    while(temp!=NULL)
    {
        if(m[temp]>0)                                 //the approach here is that
                                                    //if a link list does not coontain a loop no address is gonna repeat in this case you return false

         return 1;
         else                                   //but if there is loop there must must be a address which repeats itself so return true
         m[temp]++;
         temp=temp->next;
    }
    return 0;

}
