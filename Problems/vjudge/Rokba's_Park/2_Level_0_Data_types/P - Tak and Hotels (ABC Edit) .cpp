#include <iostream>
using namespace std;

int main()
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    int fee = n > k ? k*x + (n-k)*y : n*x;
    cout<<fee<<"\n";

    return 0;
}