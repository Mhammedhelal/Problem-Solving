#include <iostream>
using namespace std;

int main() {
  char c;
  cin >> c;
  (c != 'z') ? cout << char(c + 1) : cout << 'a';

  return 0;
}