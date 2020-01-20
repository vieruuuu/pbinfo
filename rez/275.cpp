#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("perechivocale1.in");
ofstream fout("perechivocale1.out");

int main() {
  char s[40];
  int ap[30][30];
  int maxi = 0;
  char voc[] = "aeiou";

  while (fin >> s) {
    int x, y;
    int len = strlen(s);

    for (int i = 1; i < len; i++) {
      if (strchr(voc, s[i - 1]) && strchr(voc, s[i])) {

        x = s[i - 1] - 'a';
        y = s[i] - 'a';

        ap[x][y]++;

        if (ap[x][y] > maxi) {
          maxi = ap[x][y];
        }
      }
    }
  }

  int x, y;
  int len = strlen(voc);

  for (int i = 0; i < len; i++) {
    x = voc[i] - 'a';

    for (int j = 0; j < len; j++) {
      y = voc[j] - 'a';

      if (ap[x][y] == maxi) {
        fout << voc[i] << voc[j] << " ";
      }
    }

  }

  return 0;
}