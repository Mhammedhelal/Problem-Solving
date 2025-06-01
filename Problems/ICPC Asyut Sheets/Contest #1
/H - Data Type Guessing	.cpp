#include <iostream>
using namespace std;

int main() {
  double n, k, a;
  cin >> n >> k >> a;
  double result = ((n * k) / a);

  long long myNumber = result;
  double myRes = result - myNumber;
  if (myRes > 0) {
    cout << "double" << endl;
  } else if (myNumber <= 2147483647) {
    cout << "int" << endl;
  } else {
    cout << "long long" << endl;
  }
  return 0;
}