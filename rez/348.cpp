#include <iostream>

using namespace std;

int main() {
  unsigned int n, p, cn = 1;

  cin >> n >> p;

  while (cn <= p) {
    cout << cn << ' ';
    cn = cn * n;
  }

  cout << endl;

  return 0;
}