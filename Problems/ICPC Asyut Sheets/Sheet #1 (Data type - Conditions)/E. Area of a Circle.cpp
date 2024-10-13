#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const double pi = 3.141592653;
    float r;
    cin >> r;
    double area = pow(r, 2) * pi;
    cout << fixed << setprecision(9) << area;

    return 0;
}
