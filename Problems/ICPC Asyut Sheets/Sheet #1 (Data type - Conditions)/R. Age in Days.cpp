#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int y = n / 365;
    n %= 365;
    int m = n / 30;
    n %= 30;

    cout << y << " years\n";
    cout << m << " months\n";
    cout << n << " days";

    return 0;
}
