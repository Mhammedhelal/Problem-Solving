#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);

    cout << arr[0] << "\n"
         << arr[1] << "\n"
         << arr[2] << "\n\n";
    cout << a << "\n"
         << b << "\n"
         << c << "\n";

    return 0;
}
