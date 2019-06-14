/* Tree node class
struct Node
{
    int data;
    Node *left, *right;
}; */
// Method that prints the bottom view.
map<int,int>v;
void bottomvalue(Node* root,int hd)
{
    if(root==NULL)
    return;

    v[hd]=root->data;               //to logic here to keep latest value of that
    bottomvalue(root->left,hd-1);   //particular key in the map
    bottomvalue(root->right,hd+1);  //because last value of tht is going to be seen from bottom

}
void bottomView(Node *root)
{
if(root==NULL)
return;
bottomvalue(root,0);
for(auto it=v.begin();it!=v.end();it++)
{
    cout<<it->second<<" ";
}
v.clear();
}
