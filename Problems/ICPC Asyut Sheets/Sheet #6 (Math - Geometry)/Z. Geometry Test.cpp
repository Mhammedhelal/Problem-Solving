#include <bits/stdc++.h>
using namespace std;

int main()
{
    float r, s;
    cin >> r >> s;
    if (s >= r * 2)
        cout << "Square";
    else if (r * 2 > sqrt(pow(s, 2) + pow(s, 2)))
        cout << "Circle";
    else
        cout << "Complex";

    return 0;
}