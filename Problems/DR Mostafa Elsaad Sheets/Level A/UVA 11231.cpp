// 29755594
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, b;
    while (cin >> r >> c >> b && r != 0)
        cout << ((r - 7) * (c - 7) + b) / 2 << "\n";

    return 0;
}
