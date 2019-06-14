unordered_map<int,int> m;
list<int> l;
int n;
LRUCache::LRUCache(int N)
{
     n=N;
     l.clear();
     m.clear();
}
/*Sets the key x with value y in the LRU cache */
void LRUCache::set(int x, int y)
{                                      //in set we have set the value in map as well as add it
                                    // into the list
    if(m.find(x)==m.end())    //but if list is full then we have to remove the least used key
    {
        if(n==l.size())
        {
            int temp=l.front();
              l.pop_front();
              m.erase(temp);
        }
    }
    else
    {
        l.remove(x);     //and if key is already present
        m.erase(x);     //update them
    }
    l.push_back(x);               //update and put it in latest position of list because it is recently used item
    m[x]=y;
}
/*Returns the value of the key x if
present else returns -1 */
int LRUCache::get(int x)
{
    auto it=m.find(x);
    if(it==m.end())     //get is use print the value of key
     return -1;
     else
     {
         l.remove(x);
         l.push_back(x);            //if the key is present push it into latest positon of list
         return it->second;        //because it is used recently
     }
}
