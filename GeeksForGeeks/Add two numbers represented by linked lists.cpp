Node* head3=NULL;
Node* save=NULL;
void Insert(int data)
{
    Node* newnode=new Node(data);                                      //to insert node to new linked list
    newnode->data=data;
    newnode->next=NULL;
    if(head3==NULL)
    {
        head3=newnode;
        save=newnode;
        return;
    }
    save->next=newnode;
    save=newnode;
}
Node* addTwoLists(Node* first, Node* second) {
    head3=NULL;
   Node* temp1=first;
   Node* temp2=second;
   int c=0,diff,add;
   while(temp1!=NULL&temp2!=NULL)
   {
        add=temp1->data+temp2->data+c;                              //c here stands for carry
                                                                    //if add is greater than 9,then we have to give carry 1
       if(add>9)                                                    //to next additon
       { c=1;
            diff=add-10;
           Insert(diff);                                           //and add node with data as diff
       }
       else
       {c=0;                                                            //if add is smaller than equals to 9 then simply insert add
          Insert(add);
        }
        temp1=temp1->next;
        temp2=temp2->next;
}
if(temp1==NULL&&temp2==NULL&&c>0)                              //if both have same number of elements and both got NULL
 Insert(1);                                                    //and left with carry 1,then we have to add to the list
int flag=0;
     while(temp1!=NULL)
     { flag=1;                                          //these loops are for remaining elements
         add=temp1->data+c;                              //flag is used to check if its came into this loop
         if(add>9)
         {c=1;
         diff=add-10;
         Insert(diff);

     }
     else
     {
         c=0;
         Insert(add);
     }
     temp1=temp1->next;
     }
     if(c>0&&flag>0)                                 //if its visited last while loop and left with c=1 then we have to add it
        {Insert(1);
            flag=0;
        }
      while(temp2!=NULL)
     {   flag=1;
         add=temp2->data+c;
         if(add>9)
         {c=1;
         diff=add-10;
         Insert(diff);

     }
     else
     {
         c=0;
         Insert(add);
     }
     temp2=temp2->next;
}
if(c>0&&flag>0)
        Insert(1);
     return head3;
}
