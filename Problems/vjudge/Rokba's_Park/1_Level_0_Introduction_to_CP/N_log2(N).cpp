#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int log = 0;
    while(n>>=1){
        log++;
    }
    cout<<log<<endl;

    return 0;
}