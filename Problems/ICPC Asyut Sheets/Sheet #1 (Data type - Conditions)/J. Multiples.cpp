#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string res = (a % b == 0 || b % a == 0) ? "Multiples" : "No Multiples";
    cout << res;

    return 0;
}
