#include <iostream>

using namespace std;

struct bomba {
  int x, y;
  int p;
  int marcata = 0;
  int explodata = 0;
}
//         (x - b.x) * (x - b.x) + (y - b.y) * (y - b.y) = b.p * b.p
void boom(int _i, bomba bombe[]) {
  bombe[_i].marcata = 1;

  int b = bombe[_i];

  for (int i = 0; i < n; i++) {
    if (_i == i) {
      continue;
    }

    int b2 = bombe[i];

    if (b2.marcata == 1 || b2.explodata == 1) {
      continue;
    }

    if ((b2.x - b.x) * (b2.x - b.x) + (b2.y - b.y) * (b2.y - b.y) == b.p * b.p) {
      boom(i, bombe);
    }
  }

  bombe[_i].explodata = 1;
}

int main() {
  int n, I;

  bomba bombe[101];

  cin >> n >> I;

  for (int i = 0; i < n; i++) {
    cin >> bombe[i].x >>
      bombe[i].y >>
      bombe[i].p;

  }

  boom(I - 1, bombe);

  int k = 0;

  for (int i = 0; i < n; i++) {
    k += !bombe[i].explodata;
  }

  cout << k;
}