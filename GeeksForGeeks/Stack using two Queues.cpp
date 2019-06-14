 void QueueStack :: push(int x)
{
        q1.push(x);
}

int QueueStack :: pop()
{         int Prev;
    if(q1.empty())
    return -1;
    int n=q1.size();
    for(int i=0;i<n-1;i++)
    {
        q2.push(q1.front());
        q1.pop();
    }
    Prev=q1.front();
        q1.pop();
        while(!q2.empty())
             {
                 q1.push(q2.front());
                 q2.pop();
             }
    return Prev;
}
