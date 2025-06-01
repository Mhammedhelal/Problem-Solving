#include <iostream>
#include <math.h>
using namespace std;

int main() {
  float n, x, p;
  cin >> x >> p;
  n = (100 * p) / (100 - x);
  cout << n;

  return 0;
}