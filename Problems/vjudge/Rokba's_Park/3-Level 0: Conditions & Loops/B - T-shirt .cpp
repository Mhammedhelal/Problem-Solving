#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    double p = x <= a ? 1.0 : (x <= b ? static_cast<double>(c) / (b - a) : 0.0);
    cout << fixed << setprecision(12) << p << "\n";

    return 0;
}