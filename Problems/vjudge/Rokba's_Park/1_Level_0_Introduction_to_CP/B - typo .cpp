#include<iostream>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;

    if(s==t) cout<<"Yes";
    else
    {
        string s2;
        for(int i=0;i<s.size()-1;i++)
        {
            s2=s;
            swap(s2[i],s2[i+1]);
            if(s2==t) break;; 
        }
        if(s2==t) cout<<"Yes";
        else cout<<"No";
    }

    return 0;
}