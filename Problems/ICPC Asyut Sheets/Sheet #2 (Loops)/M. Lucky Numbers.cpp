#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
    while (n)
    {
        if (!(n % 10 == 4 || n % 10 == 7))
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    int a, b;
    cin >> a >> b;
    bool haveLucky = false;
    for (int i = min(a, b); i <= max(a, b); i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            haveLucky = true;
        }
    }
    if (!haveLucky)
        cout << -1;

    return 0;
}
