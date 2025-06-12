#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    ((a - b) >= 0) ? cout << (a - b) : cout << 0;

    return 0;
}