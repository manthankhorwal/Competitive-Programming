   int Count1=0;
   int Count(Node* temp)
   {  if(temp==NULL)
       return Count1;
       if(temp->left==NULL&&temp->right==NULL)
        Count1++;
       Count(temp->left);
       Count(temp->right);

   }
int countLeaves(Node* root)
{ Count1=0;
 return  Count(root);
}
