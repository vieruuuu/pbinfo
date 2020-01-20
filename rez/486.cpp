#include <iostream>

using namespace std;

int main() {
  int n, maxi, mini;

  cin >> n;

  int v[n];

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  maxi = v[0];
  mini = v[0];

  for (int i = 1; i < n; i++) {
    if (v[i] > maxi) {
      maxi = v[i];
    }
    if (v[i] < mini) {
      mini = v[i];
    }
  }

  cout << mini << ' ' << maxi;

  return 0;
}
