#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string substr1 = "", substr2;
    string s2 = s;
    string smallstring = s;
    for (int i = 0; i < s.size() - 1; i++)
    {
        substr1 += s[i];
        s2.erase(0, 1);
        substr2 = s2;
        sort(substr1.begin(), substr1.end());
        sort(substr2.begin(), substr2.end());
        smallstring = min(smallstring, substr1 + substr2);
    }
    cout << smallstring << endl;

    return 0;
}