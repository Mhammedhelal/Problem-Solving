#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;

    int floor = (int)a / b;
    int ceil = (a + b - 1) / b;
    int round = (a + b / 2) / b;
    cout << "floor " << a << " / " << b << " = " << floor << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil << endl;
    cout << "round " << a << " / " << b << " = " << round;

    return 0;
}
