#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (sumOfDigits(i) >= a && sumOfDigits(i) <= b)
            sum += i;
    }
    cout << sum;
}
