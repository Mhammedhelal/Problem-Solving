// https://codeforces.com/contest/483/submission/281454442
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l, r;
    cin >> l >> r;

    if (l % 2 != 0)
        l++;

    if (l + 2 > r)
        cout << -1;
    else
        cout << l << " " << (l + 1) << " " << (l + 2);

    return 0;
}
