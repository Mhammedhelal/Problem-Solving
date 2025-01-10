#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    double product;
    for (int i = 0; i < n; i++)
    {
        cin >> product;
        sum += log10(product);
    }
    sum = (double)sum / n;
    cout << (long long)pow(10, sum) + 1;

    return 0;
}