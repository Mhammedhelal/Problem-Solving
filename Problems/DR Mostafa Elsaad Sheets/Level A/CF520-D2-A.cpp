// https://codeforces.com/contest/520/submission/281066213
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 26)
    {
        cout << "NO";
        return 0;
    }
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        s[i] = tolower(s[i]);
    }
    sort(s, s + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
            count++;
    }
    (count == 26) ? cout << "YES" : cout << "NO";

    return 0;
}
