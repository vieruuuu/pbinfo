#include <iostream>

using namespace std;

int main() {
  int x, MAX = -1000000;

  cin >> x;

  if (x == 0) {
    cout << "NU EXISTA";
    return 0;
  }

  while (x != 0) {
    if (x > MAX) {
      MAX = x;
    }
    cin >> x;
  }

  cout << MAX;
  return 0;
}