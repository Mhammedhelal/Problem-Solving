#include <bits/stdc++.h>
using namespace std;

int ways(int s, int e)
{
    if (s >= e)
        return s == e;
    return ways(s + 1, e) + ways(s + 2, e) + ways(s + 3, e);
}
int main()
{
    int s, e;
    cin >> s >> e;
    cout << ways(s, e);

    return 0;
}