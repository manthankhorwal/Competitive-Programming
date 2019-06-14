 vector<int> v1,v2;
  void print1(Node* root1)
   { if(root1==NULL)
     return;
       print1(root1->left);
       v1.push_back(root1->data);
       print1(root1->right);

   }
   void print2(Node* root2)
   { if(root2==NULL)
     return;
       print2(root2->left);
       v2.push_back(root2->data);
       print2(root2->right);

   }

bool isIdentical(Node *r1, Node *r2)
{
    v1.clear();
    v2.clear();
    print1(r1);
    print2(r2);
    if(v1.size()!=v2.size())
      return false;
    if(equal(v1.begin(),v1.end(),v2.begin()))
      return true;
      else
      return false;

}
