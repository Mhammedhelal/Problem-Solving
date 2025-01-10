#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maximums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            maximums[i] = arr[i];
        else
        {
            if (arr[i] > maximums[i - 1])
                maximums[i] = arr[i];
            else
                maximums[i] = maximums[i - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << maximums[i] << " ";
    }

    return 0;
}