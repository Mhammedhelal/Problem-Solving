#include <iostream>
using namespace std;

int main() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  long long result1 = a + b - c;
  long long result2 = a + b * c;
  long long result3 = a - b + c;
  long long result4 = a - b * c;
  long long result5 = a * b + c;
  long long result6 = a * b - c;

  if (result1 == d || result2 == d || result3 == d || result4 == d ||
      result5 == d || result6 == d)
    cout << "YES";
  else
    cout << "NO";

  return 0;
}