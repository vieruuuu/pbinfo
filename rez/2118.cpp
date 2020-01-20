#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("minlex.in");
ofstream fout("minlex.out");

char S[100001];
int N;

int compara(char * S, int i, int j) {
  int k;
  for (k = 0; k < N; k++) {
    if (S[i] < S[j]) {
      return 0;
    }

    if (S[i] > S[j]) {
      return 1;
    }

    i = (i + 1) % N;
    j = (j + 1) % N;
  }
  return 1;
}

int main() {
  fin >> S;

  N = strlen(S);

  int poz = 0;
  int i;

  for (i = 1; i < N; i++) {
    if (compara(S, poz, i)) {
      poz = i;
    }
  }

  fout << poz << endl;

  return 0;
}