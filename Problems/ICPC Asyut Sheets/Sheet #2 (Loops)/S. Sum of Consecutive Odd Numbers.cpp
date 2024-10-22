#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t, sum;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        sum = 0;
        for (int i = min(n, m) + 1; i < max(n, m); i++)
        {
            if (i % 2)
                sum += i;
        }
        cout << sum << "\n";
    }
}
