{
        // Your Code
        StackNode* s= new StackNode(x);
        s->data=x;
        s->next=top;
        top=s;

}
/*The method pop which return the element poped out of the stack*/
int MyStack :: pop()
{
        // Your Code
        int popped;
        if(top==NULL)
        return -1;
        StackNode* m = top;
        top=top->next;
        popped=m->data;
        free(m);

        return popped;

}
