#include <fstream>
//#include <iostream>

using namespace std;

ifstream f("permutari1.in");
ofstream g("permutari1.out");

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
  
  for (int i = 1; i <= n; i++) {
    v[i] = n - i + 1;
  }

  k = 1;
  s[1] = 0;

  while (k >= 1) {
    ok = 0;

    while (!ok && s[k] + 1 <= n) {
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
        s[k] = 0;
      }

    } else {
      k--;
    }
  }
}
