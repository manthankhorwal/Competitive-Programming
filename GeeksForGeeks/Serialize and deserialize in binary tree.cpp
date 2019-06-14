int Count=0;
void serialize(Node *root,vector<int> &A)
{
    if(root==NULL)
    {
        A.push_back(-1);
        return;
    }
    A.push_back(root->data);
    serialize(root->left,A);
    serialize(root->right,A);
}
Node* Insert(int data)
{
    Node* newnode=new Node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
Node* make(Node* root,vector<int > &A)
{
    if(Count==A.size())
    return NULL;
    if(A[Count]==-1)
    {
        Count++;
        return NULL;
    }
    root=Insert(A[Count]);
    Count++;
    root->left=make(root->left,A);
    root->right=make(root->right,A);
    return root;

}


Node * deSerialize(vector<int> &A)
{
    Count=0;
    Node* root=NULL;
     return make(NULL,A);
}
