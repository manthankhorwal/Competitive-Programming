/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

void leftviewutil(Node* root,int level,int* Max)
{
    if(root==NULL)
    return;
    if(*Max<level)
    {
    cout<<root->data<<" ";
    *Max=level;

    }
    leftviewutil(root->left,level+1,Max);
    leftviewutil(root->right,level+1,Max);
}
void leftView(Node *root)
{int Max=0;
   leftviewutil(root,1,&Max);
}


