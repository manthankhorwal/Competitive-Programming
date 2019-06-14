void connect(Node *p)

{

    Node* root=p;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())       //logic is just put a NULL after every level
    {   root=q.front();
        q.pop();

        if(root!=NULL)
        {
            root->nextRight=q.front();

            if(root->left)
              q.push(root->left);
           if(root->right)
              q.push(root->right);

        }
        else if(!q.empty())
          q.push(NULL);

    }
}



