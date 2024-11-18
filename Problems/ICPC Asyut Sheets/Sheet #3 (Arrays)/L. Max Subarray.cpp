#include <bits/stdc++.h>
using namespace std;

int maxElement(int *arr, int start, int end)
{
    int max = arr[start];
    for (int i = start; i <= end; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
                cout << maxElement(arr, i, j) << " ";
        }
        cout << "\n";
    }
    return 0;
}
