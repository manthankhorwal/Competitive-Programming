struct node *reverse (struct node *head, int k)
{
  int Count=0;


stack<int> s;                         //this method is reverse by stack
    node* temp=head;
    while(temp!=NULL)
     {Count++;                         //here we count number of nodes

     temp=temp->next;
     }
  int num=Count/k;                    //divide with k to get a multiple of k
   int remain=Count%k;                 //we will first reverse till multiple of k
                                          //for ex. n=10 and k=4 then we first reverse 10/4=2
                                          //means 2*k=8 nodes
                                          //then remaining

  int step;
  step=0;
  node* begineer=head;
  node* ahead;
  while(step!=num)                      //for every value of step we are reversing k no of nodes
  { Count=0;

        node* ahead=begineer;

      while(Count!=k)
      {
          s.push(ahead->data);          //pushing k no of nodes in stack

          ahead=ahead->next;
          Count++;

      }


      while(begineer!=ahead)
      {
          begineer->data=s.top();       //assigning top of stack to first of node of window of k elements
          s.pop();
          begineer=begineer->next;
      }

step++;

  }
 node* begineer1=begineer;
while(begineer!=NULL)             //then for the remaining nodes
{
    s.push(begineer->data);
    begineer=begineer->next;
}
while(begineer1!=NULL)
{
    begineer1->data=s.top();
    s.pop();
    begineer1=begineer1->next;
}return head;}
