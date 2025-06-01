#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int ma = max(a+b,a-b);
    ma = max(ma,a*b);
    cout<<ma<<endl;

    return 0;
}
