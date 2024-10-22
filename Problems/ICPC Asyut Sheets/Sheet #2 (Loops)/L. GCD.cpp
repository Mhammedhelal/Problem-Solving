#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (b % a == 0)
        return a;

    return GCD(b % a, a);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << GCD(min(a, b), max(a, b));

    return 0;
}
