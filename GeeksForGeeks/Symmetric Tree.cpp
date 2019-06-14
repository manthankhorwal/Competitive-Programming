bool find(Node* l,Node* r)

{  if((l==NULL&&r!=NULL)||(l!=NULL&&r==NULL))
return false;
    if(l==NULL&&r==NULL)
   return true;

    if(l->key!=r->key)
       return false;

       return find(l->left,r->right)&&find(l->right,r->left);
}
bool isSymmetric(struct Node* root)
{
	if(root==NULL)
	return true;

  if(find(root->left,root->right))
     return true;
     else
     return false;
}
