#include <iostream>

using namespace std;

int main() {
  int n, mini, x, cx, nr = 0;
  cin >> n;
  mini = 9;

  for (int i = 1; i <= n; i++) {
    cin >> x;
    cx = x;

    while (cx > 9) {
      cx /= 10;
    }

    if (cx < mini) {
      mini = cx;
      nr = x;
    } else if (cx == mini) {
      if (x > nr) {
        nr = x;
      }
    }
  }

  cout << nr;
  return 0;
}