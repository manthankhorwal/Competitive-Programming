Node* head=NULL;
Node* save=NULL;
void Insert(int data)
{
    Node* newnode=new Node(data);
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=data;
    if(head==NULL)
    {
        head=newnode;
        save=newnode;
        return;
    }
    save->right=newnode;
    newnode->left=save;
    save=newnode;
}
void check(Node *root)
{
    if(root==NULL)
    return;
    check(root->left);
    Insert(root->data);
    check(root->right);
}
void BToDLL(Node *root, Node **head_ref)
{
 head=*head_ref;
 if(root==NULL)
 return;
 check(root);
*head_ref=head;
}
