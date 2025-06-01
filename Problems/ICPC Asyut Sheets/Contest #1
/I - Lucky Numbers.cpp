#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int num;
  cin >> num;
  int first = num % 10;
  num /= 10;
  int second = num;

  if (first == 0)
    cout << "YES";
  else if (max(first, second) % min(first, second) == 0)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}