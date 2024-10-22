#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    int even = 0, odd = 0, pos = 0, neg = 0;
    while (n--)
    {
        cin >> x;
        (x % 2) ? odd++ : even++;
        if (x > 0)
            pos++;
        else if (x < 0)
            neg++;
    }
    cout << "Even: " << even << "\n"
         << "Odd: " << odd << "\n"
         << "Positive: " << pos << "\n"
         << "Negative: " << neg;

    return 0;
}
