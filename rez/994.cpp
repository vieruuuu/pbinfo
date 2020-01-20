#include <fstream>

using namespace std;

ifstream fin("fiboverif1.in");
ofstream fout("fiboverif1.out");

int fibo(int a, int f1, int f2 = 1) {

  int f3 = f1 + f2;

  if (a == f1) {
    return 1;
  }
  if (a == f2) {
    return 1;
  }
  if (a == f3) {
    return 1;
  }

  f1 = f2;
  f2 = f3;
  if (a > f3) {
    return fibo(a, f1, f2);
  }

  return 0;
}
int main() {
  int n;

  fin >> n;

  int a[n];

  for (int i = 0; i < n; i++) {
    fin >> a[i];

    if (fibo(a[i], 0, 1) == 1) {
      fout << a[i] << " ";
    }
  }
  return 0;

}
