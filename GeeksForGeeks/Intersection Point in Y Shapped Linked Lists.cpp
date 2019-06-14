  #include<bits/stdc++.h>
int intersectPoint(Node* head1, Node* head2)
{ Node *temp1=head1;
  map<Node*,int> m;                                //store the addresses of node in map
    while(temp1!=NULL)
         {
             m[temp1]++;                              //store every adress with increment all them will be having value 1
             temp1=temp1->next;
         }
         Node *temp2=head2;
         while(temp2!=NULL)
         {
             if(m[temp2]>0)                  //if we get a same node address from 2nd singly list then tht is your intersection point
             return temp2->data;
             else
             m[temp2]++;
             temp2=temp2->next;
         }
         return -1;
}
