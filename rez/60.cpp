#include <iostream>

using namespace std;

int main() {
  unsigned long long a, b, r;

  cin >> a >> b;

  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  
  if (a == 1) {
    cout << "PIE";
  } else {
    cout << "NOPIE";
  }
  return 0;
}
