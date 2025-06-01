#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int D;
    cin >> D;
    double pressure = D / 100.0;
    cout << fixed << setprecision(10); // To ensure sufficient precision
    cout << pressure << endl;
    return 0;
}