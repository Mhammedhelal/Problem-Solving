#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool flag = (s[0] == 'W' && s[1] == 'U' && s[2] == 'B');
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            continue;
        }
        bool fst = (s[i - 3] == 'W' && s[i - 2] == 'U' && s[i - 1] == 'B');
        if (fst)
        {
            if (flag)
            {
                flag = false;
                cout << s[i];
            }
            else
                cout << " " << s[i];
        }
        else
            cout << s[i];
    }
}
