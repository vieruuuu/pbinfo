#include <fstream>

using namespace std;

ifstream fin("div3.in");
ofstream fout("div3.out");

int suma_cifre(int n) {
  int s = 0;
  while (n) {
    int c = n % 10;
    s = s + c;
    n = n / 10;
  }
  return s;
}
int main() {
  int n;
  fin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    fin >> x;

    if (suma_cifre(x) % 3 == 0) {
      fout << x << ' ';
    }
  }

  return 0;
}
