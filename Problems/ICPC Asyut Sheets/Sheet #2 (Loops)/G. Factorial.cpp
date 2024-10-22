#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << factorial(n) << "\n";
    }

    return 0;
}
