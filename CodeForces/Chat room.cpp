#include <iostream>
#include <cstdio>
#include<cstdlib>
#include <string>

using namespace std;
bool ischeck(string s)
{ string word="hello";
    int a=0;
    int i, count = 0;

    for(i=0; i<s.size(); i++){
        if(s[i]==word[a]){
            a++;
            count++;
        }
    }
    if(count==5)
        return true;
    else
        return false;

}

int main()
{

    string s;
    cin>>s;

    if(ischeck(s))
    cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
