#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        for (; x % 4 != 0; x++)
            cout << x << " ";
        cout << "PUM\n";
        x++;
    }

    return 0;
}
