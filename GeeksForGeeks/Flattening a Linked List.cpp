

/* Node structure  used in the program
struct Node{
	int data;
	struct Node * next;
	struct Node * bottom ;
}; */
/*  Function which returns the  root of
    the flattened linked list. */
Node* head1=NULL;
Node* save=NULL;


void Insert(int data)
{
    Node* newnode=new Node;
    newnode->data=data;
    newnode->next=NULL;
    newnode->bottom=NULL;
    if(head1==NULL)
    {
        head1=newnode;
        save=newnode;
        return;

    }
    save->bottom=newnode;
    save=newnode;

}
Node *flatten(Node *root)
{ vector<int> v;
head1=NULL;
   Node* temp=root;
   while(temp!=NULL)
   {    v.push_back(temp->data);      //to insert head element of every linked lists
       Node* temp2=temp->bottom;           //to give  address of 1st node of every linked list
       while(temp2!=NULL)
       {
           v.push_back(temp2->data);    //to get every element of linked lists in the vector
           temp2=temp2->bottom;
       }
       temp=temp->next;

    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        Insert(v[i]);
    }
    return head1;
}
