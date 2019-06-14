void StackQueue :: push(int x)
 {
        s1.push(x);              //take pushed element on s1 stack;
 }

int StackQueue :: pop()
{
       while(!s1.empty())
       {
           s2.push(s1.top());   //copy everything of s1 to s2 so that last element becomes first of s2
           s1.pop();
       }
        if(s2.empty())
        return -1;

        int front=s2.top();
        s2.pop();     //now pop
        while(!s2.empty())
        {s1.push(s2.top()); //revert back everything of s2 to s1;
            s2.pop();

        }
        return front;
}
