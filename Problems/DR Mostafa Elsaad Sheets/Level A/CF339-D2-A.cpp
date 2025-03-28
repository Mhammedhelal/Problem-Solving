// https://codeforces.com/contest/339/submission/276666862
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int size = s.size();
    int n = size / 2;
    // no. of '+' = size/2       no. numbers = size/2 + 1
    for (int i = n; i < size; i++)
    {
        cout << s[i];
        if (i < size - 1)
            cout << "+";
    }
}