// https://codeforces.com/contest/270/submission/275921851
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        double n = 2.00 / (1.00 - (a / 180.00));
        ((((int)(round(n * 100))) % 100) != 0) ? cout << "NO\n" : cout << "YES\n";
    }
}
