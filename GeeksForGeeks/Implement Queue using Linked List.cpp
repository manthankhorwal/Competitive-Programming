void MyQueue:: push(int x)
{
    QueueNode* newnode=new QueueNode(x);
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL)
    {
        front=newnode;                                             //only front(head) gets deleted in queue
        rear=newnode;                                               //and new nodes are added at rear
        return;
    }
    rear->next=newnode;
    rear=newnode;

}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{    if(front==NULL)               //this means no nodes are present
      return -1;
        if(front==rear)     //this condition means there are only one node left
        {
            int num=front->data;
             delete(front);
              front=NULL;
              rear=NULL;
             return num;
        }
        QueueNode* temp=front;
        int num=front->data;
        front=front->next;           //simply assign next node of front to front as front is going to be popped
        delete(temp);
        return num;

}
