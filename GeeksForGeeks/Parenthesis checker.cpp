using namespace std;
#include<stack>
bool arepair(char closing,char opening)
{
    if(opening=='('&& closing==')') return true;
    if(opening=='['&& closing==']') return true;
    if(opening=='{'&& closing=='}') return true;
    return false;
}
bool areparen(string str)
{ stack <char> s;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='('||str[i]=='['||str[i]=='{')
             s.push(str[i]);

        else if(s.empty()||!arepair(str[i],s.top()))
              return false;
              else
                s.pop();
    }
    return s.empty()?true:false;
}
main()
{ int t;
cin>>t;
while(t--)
    {string s;
    cin>>s;
    if(areparen(s))
    cout<<"balanced";
    else
        cout<<"not balanced";

cout<<endl;
}

}
