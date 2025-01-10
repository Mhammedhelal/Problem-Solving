#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    // Process each digit of the number
    for (int i = 0; i < x.size(); i++)
    {
        int digit = x[i] - '0';      // Convert char to int
        int inverted = 9 - digit;    // Calculate inverted digit
        if (i == 0 && inverted == 0) // Ensure no leading zero
            continue;
        if (inverted < digit)      // Choose the smaller value
            x[i] = '0' + inverted; // Convert int back to char
    }

    cout << x << endl; // Output the result
    return 0;

    return 0;
}