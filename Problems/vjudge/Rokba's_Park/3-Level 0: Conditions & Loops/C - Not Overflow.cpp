#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;
    if (N >= -2147483648 && N <= 2147483647) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}   