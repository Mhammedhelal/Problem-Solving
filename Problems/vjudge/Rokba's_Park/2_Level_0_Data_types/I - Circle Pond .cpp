#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.141592654

int main()
{
    float r;
    cin>>r;
    double area = 2 * PI * r;
    cout << setprecision(23) << area<<"\n";

    return 0;
}