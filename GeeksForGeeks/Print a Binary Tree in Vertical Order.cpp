map<int,vector<int>>m;
void verticalmap(Node* root,int hd)
{
    if(root==NULL)
    return ;
    m[hd].push_back(root->data);       //add values of same horizontal distance in a vector
    verticalmap(root->left,hd-1);
    verticalmap(root->right,hd+1);

}
void verticalOrder(Node *root)
{
  if(root==NULL)
  return;
  verticalmap(root,0);
  for(auto it=m.begin();it!=m.end();it++)
  {
      vector<int> v=it->second;                            //access the vector of map
      for(auto it=v.begin();it!=v.end();it++)             //print the values
        cout<<*it<<" ";
  }
  m.clear();
}
