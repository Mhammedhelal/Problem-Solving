#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int x = s[0] - '0';
    if (x % 2)
        cout << "ODD";
    else
        cout << "EVEN";

    return 0;
}
