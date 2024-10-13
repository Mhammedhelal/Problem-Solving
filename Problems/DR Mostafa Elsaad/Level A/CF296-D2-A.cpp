// https://codeforces.com/contest/296/submission/276634722
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool valid = true;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (n < 2 * count - 1)
        {
            valid = false;
            break;
        }
    }
    (valid) ? cout << "YES" : cout << "NO";
}