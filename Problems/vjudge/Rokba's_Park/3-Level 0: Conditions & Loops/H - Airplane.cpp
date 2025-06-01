#include <iostream>
using namespace  std;

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int P, Q, R;
    cin >> P >> Q >> R;
    int min_sum = min({P + Q, P + R, Q + R});
    cout << min_sum << endl;
    return 0;
}
