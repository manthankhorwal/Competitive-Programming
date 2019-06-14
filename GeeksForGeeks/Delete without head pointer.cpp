void deleteNode(Node *node)
{
Node* temp=node->next;
node->data=temp->data;
node->next=temp->next;
delete(temp);
}
//just copy the data of next elements to the node to be deleted and delete the node
which we are copying from
