#include<bits/stdc++.h>
using namespace std;
class node
{ public:
    node* next;
    int data;
};
node* save=NULL;
node* head=NULL;
void newnode(int data)
{ node* newnode=new node();
   newnode->data=data;
   newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        save=newnode;
        return;

    }
     save->next=newnode;
     save=newnode;

}
void print(void)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int middle(void)

{
    node* temp=head;
    int Count=0;
    while(temp!=NULL)
    {
        Count++;
        temp=temp->next;
    }
    temp=head;
    for(int i=0;i<Count/2;i++)
    {
        temp=temp->next;

    }
    return temp->data;
}
void Reverse(void)
{
    node *current,*prev,*next;
        current=head;
        prev=NULL;
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }

        head=prev;}
void Kreverse(int k)
{ int Count=0;


stack<int> s;
    node* temp=head;
    while(temp!=NULL)
     {Count++;

     temp=temp->next;
     }
  int num=Count/k;
  int remain=Count%k;

  int step;
  step=0;
  node* begineer=head;
  node* ahead;
  while(step!=num)
  { Count=0;

        node* ahead=begineer;

      while(Count!=k)
      {
          s.push(ahead->data);

          ahead=ahead->next;
          Count++;

      }


      while(begineer!=ahead)
      {
          begineer->data=s.top();
          s.pop();
          begineer=begineer->next;
      }

step++;

  }
 node* begineer1=begineer;
while(begineer!=NULL)
{
    s.push(begineer->data);
    begineer=begineer->next;
}
while(begineer1!=begineer)
{
    begineer1->data=s.top();
    s.pop();
    begineer1=begineer1->next;
}
}
/*

  while(ahead1!=NULL)
  {
      s.push(ahead->data);
      ahead=ahead->next;

  }
  while(begineer1!=NULL)
  {
      begineer->data=s.top();
      s.pop();
      begineer=begineer->next;
  }

*/
int getNthFromLast(node *head, int n)
{
     int  Count=0;
    node* temp=head;
    while(temp!=NULL)
    {
         Count++;                          //Count number of nodes
         temp=temp->next;
    }
    if(n>Count)                            //if asked value is greater than number of nodes ,doesnt exist return -1
    return -1;
    temp=head;
    for(int i =0;i<Count-n;i++)         //run the  loop till that required node
    {
        temp=temp->next;
    }
    return temp->data;       //and return its value
}

void segregte(node* head)
{
    node* temp=head;
    map<int,int> m;
    while(temp!=NULL)
    {
        m[temp->data]++;
        temp=temp->next;
    }
    temp=head;
    int i=0;
    while(temp!=NULL)
    {
        while(m[i]!=0)
        {
            temp->data=i;
            m[i]--;
            temp=temp->next;
        }
        i++;
    }}
    void sortedmerge(void)
    {
        int m[1000]={0};

        node* temp=head;
        while(temp!=NULL)
        {
            m[temp->data]++;
            temp=temp->next;
        }
        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            while(m[i]!=0)
            {
                temp->data=i;
                m[i]--;
            }
            i++;
        }
    }

main()
{
    newnode(5);
    newnode(10);
    newnode(15);
    newnode(20);
    newnode(03);
   newnode(10);
   newnode(24);
   newnode(25);
 newnode(60);
   newnode(1);

print();
cout<<endl;
   segregte(head);
print();
sortedmerge();
print();



}
