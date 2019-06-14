int maxlevel=0;
int check(Node* temp,int height)
{
    if (temp==NULL)
    return maxlevel;
    if(height>maxlevel)
         maxlevel=height;
    check(temp->left,height+1);
    check(temp->right,height+1);

}
int height(Node* node)

{
    if(node==NULL)
   return 0;
   maxlevel=0;
  return check(node,1);
}
