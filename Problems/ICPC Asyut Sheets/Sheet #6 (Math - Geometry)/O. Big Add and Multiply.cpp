#include <bits/stdc++.h>
using namespace std;

// Function to add two large numbers represented as strings
string addLargeNumbers(const string &a, const string &b)
{
    string result = "";
    int carry = 0, sum = 0;
    int i = a.size() - 1, j = b.size() - 1;

    // Add digits from the back
    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';

        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

// Function to multiply a large number by a smaller number (up to 4 digits)
string multiplyLargeNumber(const string &a, int b)
{
    string result = "";
    int carry = 0, prod = 0;

    for (int i = a.size() - 1; i >= 0; i--)
    {
        prod = (a[i] - '0') * b + carry;
        carry = prod / 10;
        result.push_back((prod % 10) + '0');
    }

    // Add remaining carry
    while (carry)
    {
        result.push_back((carry % 10) + '0');
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string N;
    cin >> N;

    // Perform addition: N + 9999
    string sumResult = addLargeNumbers(N, "9999");

    // Perform multiplication: N * 9999
    string multiplyResult = multiplyLargeNumber(N, 9999);

    // Output results
    cout << sumResult << endl;
    cout << multiplyResult << endl;

    return 0;
}
