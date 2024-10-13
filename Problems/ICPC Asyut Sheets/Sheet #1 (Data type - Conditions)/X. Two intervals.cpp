#include <bits/stdc++.h>
using namespace std;

bool between(int n, int l, int r)
{
    return n >= l && n <= r;
}
int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 > r1 || l1 > r2)
        cout << -1;

    else if (between(l2, l1, r1) && between(r2, l1, r1))
        cout << l2 << " " << r2;
    else if (between(l1, l2, r2) && between(r1, l2, r2))
        cout << l1 << " " << r1;

    else if (between(l2, l1, r1))
        cout << l2 << " " << r1;
    else if (between(l1, l2, r2))
        cout << l1 << " " << r2;

    return 0;
}
