#include<iostream>
using namespace std;


int main()
{
    string s[3];
    string t;
    cin>>s[0]>>s[1]>>s[2]>>t;

    for(char i : t){
        cout<<s[i-49];
    }
    
    return 0;
}