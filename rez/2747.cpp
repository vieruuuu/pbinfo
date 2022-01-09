#include <iostream>

using namespace std;

int main() {
  int n, m;

  cin >> n >> m;

  int i = 0;

  while (m != 1) {
    m = m / n;
    i++;
  }

  cout << i << endl;

  return 0;
}
