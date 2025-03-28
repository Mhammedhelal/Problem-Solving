// https://codeforces.com/contest/584/submission/279763811
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string res = "";
    if (n < 2 && t == 10)
    {
        cout << -1;
        return 0;
    }
    else if (n >= 2 && t == 10)
    {
        for (int i = 0; i < n - 1; i++)
            res += '0' + 1;

        res += '0' + 0;
        cout << res;
    }
    else
    {
        for (int i = 0; i < n; i++)
            res += '0' + t;

        cout << res;
    }
}
