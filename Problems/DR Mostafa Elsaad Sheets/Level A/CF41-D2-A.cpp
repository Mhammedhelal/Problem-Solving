// https://codeforces.com/contest/41/submission/276870189
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size())
    {
        cout << "NO";
        return 0;
    }
    int l = 0, r = t.size() - 1;
    while (l < s.size())
    {
        if (s[l] != t[r])
        {
            cout << "NO";
            return 0;
        }
        l++;
        r--;
    }
    cout << "YES";

    return 0;
}