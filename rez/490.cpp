#include <iostream>

using namespace std;

int main() {
  int n, i, mini = 0, maxi = 0;

  cin >> n;

  int v[n];

  for (i = 0; i < n; i++) {
    cin >> v[i];
    if (v[i] > v[maxi]) maxi = i;
    if (v[i] < v[mini]) mini = i;
  }

  if (mini > maxi) {
    int aux = mini;
    mini = maxi;
    maxi = aux;
  }

  for (i = mini; i <= maxi; i++) {
    cout << v[i] << " ";
  }

  return 0;
}