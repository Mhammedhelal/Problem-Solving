#include <bits/stdc++.h>
using namespace std;

int findMax(int *arr, int n)
{
    int ma = arr[n - 1];
    while (n--)
    {
        if (arr[n] > ma)
            ma = arr[n];
    }
    return ma;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findMax(arr, n);

    return 0;
}
