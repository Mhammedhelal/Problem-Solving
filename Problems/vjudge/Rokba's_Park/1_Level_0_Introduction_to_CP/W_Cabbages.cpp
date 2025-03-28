#include<iostream>
using namespace std;

int main()
{
    int n,a,x,y;
    cin>>n>>a>>x>>y;

    if(a>n) cout<<x*n<<endl;
    else    cout<<(x*a) + y*(n-a)<<endl;

    return 0;
}