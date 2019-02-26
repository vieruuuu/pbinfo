#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n, prev, dif, x, min = 1000000000, nr1 = 0, nr2 = 0, sum = 0, _sum;

  cin >> n;
  cin >> prev;
  
  for (int i = 1; i < n; i++) {
    cin >> x;
    dif = abs(prev - x);

    if (dif < min) {
      min = dif;
      nr1 = prev;
      nr2 = x;
      sum = nr1 + nr2;
    } else if (dif == min) {
      _sum = x + prev;

      if (_sum < sum) {
        min = dif;
        nr1 = prev;
        nr2 = x;
        sum = _sum;
      }
    }

    prev = x;
  }

  cout << nr1 << ' ' << nr2;

  return 0;
}