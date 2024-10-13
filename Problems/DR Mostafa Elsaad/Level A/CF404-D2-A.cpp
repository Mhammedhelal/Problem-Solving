// https://codeforces.com/contest/404/submission/279774587
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char paper[n][n];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cin >> paper[i][j];
        }
    }

    int p = paper[0][0];
    int q = paper[0][1];
    if (p == q)
    {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if (i == j || j == n - i - 1)
            {
                if (paper[i][j] != p)
                {
                    cout << "NO";
                    return 0;
                }
            }
            else if (paper[i][j] != q)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}