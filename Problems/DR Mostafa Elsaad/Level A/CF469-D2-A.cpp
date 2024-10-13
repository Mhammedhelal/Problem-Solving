// https://codeforces.com/contest/469/submission/279761600
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    cin >> p;
    bool arr[n + 1] = {0};
    int num;
    while (p--)
    {
        cin >> num;
        arr[num] = 1;
    }
    cin >> q;
    while (q--)
    {
        cin >> num;
        arr[num] = 1;
    }
    bool pass = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            pass = 0;
            break;
        }
    }

    (pass) ? cout << "I become the guy." : cout << "Oh, my keyboard!";

    return 0;
}
