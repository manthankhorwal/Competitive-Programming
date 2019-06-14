/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin()
{  vector<int> v;
   if(s.empty())
   return -1;
   while(!s.empty())
   {

       v.push_back(s.top());
       s.pop();
   }
   vector<int>::iterator it=min_element(v.begin(),v.end());

   for(int i=v.size()-1;i>=0;i--)
   {
       s.push(v[i]);
   }
   return *it;

}

int _stack ::pop()
{ if(s.empty())
  return -1;

   int Pop=s.top();
   s.pop();
   return Pop;
}
/*push element x into the stack*/
void _stack::push(int x)
{
   s.push(x);
}
