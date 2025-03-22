#include<iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int l = min(s.size(),t.size());

    for (int i = 0; i < l; i++)
    {
        if(s[i]<t[i]) {cout<<"Yes";return 0;}
        else if(s[i]>t[i]) {cout<<"No";return 0;}
    }
    s.size()<t.size() ? cout<<"Yes":cout<<"No";

    return 0;
}