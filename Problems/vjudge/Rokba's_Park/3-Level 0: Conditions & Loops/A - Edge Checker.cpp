#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string res = b-a==1||b==10&&a==1? "Yes\n" :  "No\n";
    cout<<res;

    return 0;
}