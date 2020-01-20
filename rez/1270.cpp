#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char n[11];

  cin.getline(n, 11);

  int len = strlen(n);

  unsigned long long int h = 0, z = 1, coef = 0;

  for (int i = len - 1; i >= 0; --i) {

    if (n[i] == '0') coef = 0;
    if (n[i] == '1') coef = 1;
    if (n[i] == '2') coef = 2;
    if (n[i] == '3') coef = 3;
    if (n[i] == '4') coef = 4;
    if (n[i] == '5') coef = 5;
    if (n[i] == '6') coef = 6;
    if (n[i] == '7') coef = 7;
    if (n[i] == '8') coef = 8;
    if (n[i] == '9') coef = 9;
    if (n[i] == 'A') coef = 10;
    if (n[i] == 'B') coef = 11;
    if (n[i] == 'C') coef = 12;
    if (n[i] == 'D') coef = 13;
    if (n[i] == 'E') coef = 14;
    if (n[i] == 'F') coef = 15;

    h += coef * z;
    z = z * 16;
  }

  cout << h << endl;

  return 0;

}