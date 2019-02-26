#include <fstream>
//#include <iostream>

using namespace std;

ifstream f("permutari2.in");
ofstream g("permutari2.out");

int n, k, ok, s[1001], v[1001];

int valid(int k) {
  for (int i = 1; i < k; i++) {
    if (s[i] == s[k]) {
      return 0;
    }
  }

  return 1;
}

int main() {
  f >> n;

  for (int i = 0; i < n; i++) {
    f >> v[i];
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (v[i] > v[j]) {
        swap(v[i], v[j]);
      }
    }
  }

  k = 1;
  s[1] = -1;

  while (k) {
    ok = 0;

    while (!ok && s[k] + 1 < n) {
      s[k]++;
      ok = valid(k);
    }

    if (ok == 1) {
      if (k == n) {
        for (int i = 1; i <= n; i++) {
          g << v[s[i]] << " ";
        }

        g << "\n";
      } else {
        k++;
        s[k] = -1;
      }

    } else {
      k--;
    }
  }
}