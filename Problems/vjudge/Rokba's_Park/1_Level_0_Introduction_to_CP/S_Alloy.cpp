#include <iostream>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    if(A>0&&B==0)   cout<<"Gold\n";
    else if(A==0&&B>0)  cout<<"Silver\n";
    else cout<<"Alloy\n";

    return 0;
}