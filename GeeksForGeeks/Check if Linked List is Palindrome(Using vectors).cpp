#include<bits/stdc++.h>
bool isPalindrome(Node *head)
{
    Node* temp=head;
    vector<int> v;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }

    Node *temp1=head;
    while(temp1!=NULL)
    {
        if(temp1->data!=v.back())
        {
            return false;
        }
        temp1=temp1->next;
        v.pop_back();
    }
    return true;


}
