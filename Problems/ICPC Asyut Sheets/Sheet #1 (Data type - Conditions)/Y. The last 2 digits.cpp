#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    int result = (a * b * c * d);
    if (result % 100 <= 9)
    {
        cout << "0" << result % 100 << endl;
    }
    else
    {
        cout << result % 100 << endl;
    }

    return 0;
}
