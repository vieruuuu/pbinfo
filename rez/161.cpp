#include <iostream>

using namespace std;

int main() {
  int n, k = 0, s = 0;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for (int i = 0; i < n; i++) {
    if (v[i] != 0) {
      s += v[i];
      k++;
    }
  }

  int ma = s / k;

  for (int i = 0; i < n; i++) {
    if (v[i] == 0) {
      v[i] = ma;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  
  return 0;
}