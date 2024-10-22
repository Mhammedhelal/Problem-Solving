#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2 || (x % 2 == 0 && x != 2))
        return false;

    for (int i = 2; i <= x / 2; i++)
        if (x % i == 0)
            return false;

    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (isPrime(i))
            cout << i << " ";

    return 0;
}
