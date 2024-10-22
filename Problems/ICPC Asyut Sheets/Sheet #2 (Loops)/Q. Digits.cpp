#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
            cout << s[i] << " ";
        cout << "\n";
    }

    return 0;
}
