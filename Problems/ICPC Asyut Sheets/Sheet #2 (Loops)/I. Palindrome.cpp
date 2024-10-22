#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n)
    {
        rev *= 10;
        rev += n % 10;
        n /= 10;
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    int rev = reverse(n);
    cout << rev;
    if (rev == n)
        cout << "\nYES";
    else
        cout << "\nNO";

    return 0;
}
