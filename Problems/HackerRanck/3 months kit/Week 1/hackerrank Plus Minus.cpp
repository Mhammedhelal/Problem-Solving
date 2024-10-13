#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> &arr)
{
    int n = arr.size();
    float p = 0, g = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            p++;
        else if (arr[i] < 0)
            g++;
        else
            z++;
    }
    p = p / n;
    g = g / n;
    z = z / n;
    cout << p << "\n";
    cout << g << "\n";
    cout << z;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    plusMinus(arr);

    return 0;
}
