// https://codeforces.com/contest/318/submission/276714928
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long mid = (n % 2 == 0) ? n / 2 : n / 2 + 1;
    if (k <= mid)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - mid);
}
