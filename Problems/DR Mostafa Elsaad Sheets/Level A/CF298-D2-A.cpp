#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    int fst, lst;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] != '.')
        {
            fst = i;
            break;
        }
    }
    for (int i = n - 2; i > 0; i--)
    {
        if (s[i] != '.')
        {
            lst = i;
            break;
        }
    }

    // 3 cases
    if (s[fst] == 'R' && s[lst] == 'R')
        cout << fst + 1 << " " << lst + 2;

    else if (s[fst] == 'L' && s[lst] == 'L')
        cout << lst + 1 << " " << fst;

    else if (s[fst] == 'R' && s[lst] == 'L')
    {
        for (int i = fst; i < n; i++)
        {
            lst = i;
            if (s[i] == 'L')
                break;
        }
        cout << fst + 1 << " " << lst;
    }
}