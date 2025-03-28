#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int x = ((a+c-1)/c)*c;

    if(x<=b)    cout<<x;
    else cout<<-1;
    
    return 0;
}