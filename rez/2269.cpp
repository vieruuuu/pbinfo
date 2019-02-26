#include <fstream>
#include <iostream>

using namespace std;

ifstream in("maximpar.in");
ofstream out("maximpar.out");

int main() {
  int n, x, max = 0, aparitii = 0, nrpar = 0;

  in >> n;

  for (int i = 0; i < n; i++) {
    in >> x;

    if (x % 2 == 0) {
      nrpar = 1;
      if (x > max) {
        aparitii = 1;
        max = x;
      } else if (x == max) {
        ++aparitii;
      }
    }
  }

  if (nrpar) {
    out << max << ' ' << aparitii;
  } else {
    out << -1;
  }

  return 0;
}
