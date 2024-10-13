// https://codeforces.com/contest/282/submission/275981861
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    int x = 0, size;
    while (n--)
    {
        cin >> s;
        size = s.size();
        if (s[0] == '+' || s[size - 1] == '+')
            x++;
        else if (s[0] == '-' || s[size - 1] == '-')
            x--;
    }
    cout << x;
}
