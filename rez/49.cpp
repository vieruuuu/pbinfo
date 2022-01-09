#include <iostream>

using namespace std;

int main() {
  unsigned int n;

  cin >> n;

  unsigned long long f = 1;

  for (unsigned int i = 2; i <= n; i++) {
    f = f * i;
  }

  cout << f << endl;

  return 0;
}