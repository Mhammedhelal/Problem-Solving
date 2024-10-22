#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, ones, dec;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ones = 0;
        while (n)
        {
            if (n % 2 == 1)
                ones++;
            n /= 2;
        }
        dec = 0;
        for (int i = 0; i < ones; i++)
            dec += pow(2, i);
        cout << dec << "\n";
    }
}
