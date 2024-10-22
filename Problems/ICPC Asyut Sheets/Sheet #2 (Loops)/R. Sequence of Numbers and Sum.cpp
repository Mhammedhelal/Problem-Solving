#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum;
    while (true)
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
            return 0;
        sum = 0;
        for (int i = min(n, m); i <= max(n, m); i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << "\n";
    }
}
