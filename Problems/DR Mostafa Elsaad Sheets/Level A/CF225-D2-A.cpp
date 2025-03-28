// https://codeforces.com/contest/225/submission/276062072
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, a, b;
    cin >> n >> x;

    bool flag = 1;
    while (n--)
    {
        cin >> a >> b;
        if (a == x || a == 7 - x || b == x || b == 7 - x)
        {
            cout << "NO";
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "YES";
}
