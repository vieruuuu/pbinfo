#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char s[101];
  char nush[50][101];
  int amModificatCv = 0;
  int _i = 0;
  char * p;

  cin.getline(s, 256);
  p = strtok(s, " ");

  while (p) {
    int n = strlen(p);

    if ((n % 2) && (n > 2)) {
      int mid = n / 2;
      strcpy(p + mid, p + mid + 1);
      amModificatCv = 1;
    }

    strcpy(nush[_i++], p);

    p = strtok(0, " ");
  }

  if (!amModificatCv) {
    cout << "nu exista";
  } else {
    for (int i = 0; i < _i; i++) {
      cout << nush[i] << ' ';
    }
  }

  return 0;
}