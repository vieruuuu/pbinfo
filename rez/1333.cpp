#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double B, b, l, h, x, d;

  cin >> B >> b >> l;
  x = (B - b) / 2;
  h = sqrt(l * l - x * x);
  d = sqrt((b + x) * (b + x) + h * h);

  cout << d;
  return 0;
}