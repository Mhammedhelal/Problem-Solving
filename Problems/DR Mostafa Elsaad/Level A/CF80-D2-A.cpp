// https://codeforces.com/group/MWSDmqGsZm/contest/223206/submission/278501052
#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n == 0 || n == 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int nextPrime(int n)
{
    if (n <= 1)
    {
        return 2;
    }
    bool found = false;
    int primeNumber = n;
    while (!found)
    {
        primeNumber++;
        if (prime(primeNumber))
        {
            found = true;
        }
    }
    return primeNumber;
}
int main()
{
    int n, m;
    cin >> n >> m;
    if (nextPrime(n) == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
