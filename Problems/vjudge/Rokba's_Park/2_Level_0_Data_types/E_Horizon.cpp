#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double h;
    cin>>h;
    cout<<setprecision(14) <<sqrt(h*(12800000+h))<<"\n";

    return 0;
}