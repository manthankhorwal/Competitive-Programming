/*Complete the function below
Node is as follows
struct Node{
	int data;
	Node *left, *right;
};
*/
int maxi;
int maxutil(Node* root)
{ if(root==NULL)
 return 0;

 if(!root->left&&!root->right)
     return root->data;
  int ls=maxutil(root->left);
  int rs=maxutil(root->right);
  if(maxi<ls+rs+root->data)
    maxi=ls+rs+root->data;

    return (max(ls,rs)+root->data);


}

int maxPathSum(struct Node *root)
{  maxi=0;

      if(root==NULL)
           return 0;

    maxutil(root);
    return maxi;
}
