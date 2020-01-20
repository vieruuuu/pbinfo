#include <iostream>

using namespace std;

int n, x, y;
int v[10000];

void genereaza(int b) {
  if (b <= n && !v[b]) {
    v[b] = 1;
    genereaza(b + x);
    genereaza(b + y);
  }
}

int main() {
  int a;

  cin >> n;
  cin >> a;
  cin >> x >> y;

  genereaza(a);

  for (int i = 0; i <= n; i++) {
    if (v[i]) {
      cout << i << ' ';
    }
  }
  return 0;
}