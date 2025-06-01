#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    while (true) {
        // Takahashi's attack
        C -= B;
        if (C <= 0) {
            cout << "Yes" << endl;
            return 0;
        }
        // Aoki's attack
        A -= D;
        if (A <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }
}