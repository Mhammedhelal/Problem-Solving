// https://codeforces.com/contest/382/submission/276868954
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pan, w;
    cin >> pan >> w;

    int cross = pan.find('|');
    string left = pan.substr(0, cross);
    string right = pan.substr(cross + 1);
    for (auto c : w)
        if (left.size() <= right.size())
            left += c;
        else
            right += c;

    cout << (left.size() == right.size() ? left + "|" + right : "Impossible");

    return 0;
}