// https://codeforces.com/contest/1/submission/281451971
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    int w = n / a;
    if (w > 0)
    {
        if (n % a > 0)
            w++;
    }
    else
        w = 1;

    int l = m / a;
    if (l > 0)
    {
        if (m % a > 0)
            l++;
    }
    else
        l = 1;

    cout << (long long)w * l;

    return 0;
}
