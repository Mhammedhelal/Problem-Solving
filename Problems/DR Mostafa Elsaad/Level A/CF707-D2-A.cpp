// https://codeforces.com/contest/707/submission/279767590
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool color = 0;
    char c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;
            if (c != 'B' && c != 'W' && c != 'G')
                color = 1;
        }
    }
    (color) ? cout << "#Color" : cout << "#Black&White";

    return 0;
}
