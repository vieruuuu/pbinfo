#include <iostream>

using namespace std;

int
main()
{
  int n, c, c1, c2, p = 1, fin = 0;

  cin >> n >> c1 >> c2;

  do {
    c = n % 10;
    if (c == c1) {
      c = c2;
    }
    fin = c * p + fin;
    p = p * 10;
    n = n / 10;
  } while (n != 0);

  cout << fin;

  return 0;
}
