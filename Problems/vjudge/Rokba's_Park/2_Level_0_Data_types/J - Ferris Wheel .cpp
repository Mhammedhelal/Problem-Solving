#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int cost = a>12 ? b : a<6? 0 : b/2;
    cout<<cost<<"\n";

    return 0;
}