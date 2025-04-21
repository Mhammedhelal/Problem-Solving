#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int num = 0;
    for(char c : s)
    {
        if(c=='-')  num--;
        else num++;
    }
    cout<<num<<"\n";

    return 0;
}