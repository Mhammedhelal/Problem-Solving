#include <iostream>
#include <cmath>
using namespace std;

int countNumbersWithOddDigits(int N) {
    int count = 0;
    int d = to_string(N).length(); // Number of digits in N

    for (int k = 1; k <= d; k += 2) {
        if (k < d) {
            count += 9 * pow(10, k - 1);
        } else {
            count += N - pow(10, k - 1) + 1;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;
    cout << countNumbersWithOddDigits(N) << endl;
    return 0;
}
