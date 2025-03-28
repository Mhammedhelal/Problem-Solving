#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    string _STRINGS[] = {"H", "2B", "3B", "HR"};
    unordered_set<string>set;
    string s[4];
    for (size_t i = 0; i < 4; i++)
    {
        cin>>s[i];
        set.insert(s[i]);
    }
    bool flag =true;
    for (size_t i = 0; i < 4; i++)
    {
        if(set.count(_STRINGS[i])<=0) flag=false;
    }
    (flag)? cout<<"Yes\n":cout<<"No\n";
}