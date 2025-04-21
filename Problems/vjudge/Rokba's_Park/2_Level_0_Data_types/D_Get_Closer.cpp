#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    float d = sqrt(pow(a,2)+pow(b,2));
    cout<< a/d<<" "<<b/d<<"\n";

    return 0;
}