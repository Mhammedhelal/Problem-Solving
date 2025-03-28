// https://codeforces.com/contest/218/submission/275842099
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[2 * n + 2];
    for (int i = 1; i <= 2 * n + 1; i++)
        cin >> arr[i];

    if (arr[1] - arr[1] > 1)
    {
        arr[1]--;
        k--;
    }
    for (int i = 2; i <= 2 * n + 1; i++)
    {
        if (arr[i] - arr[i - 1] > 1 && arr[i] - arr[i + 1] > 1 && k)
        {
            arr[i]--;
            k--;
        }
    }

    for (int i = 1; i <= 2 * n + 1; i++)
        cout << arr[i] << " ";
}