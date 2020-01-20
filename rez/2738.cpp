#include <iostream>
#include <cstring>

using namespace std;

int unice(char s[]) {
  int n = strlen(s);

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i] == s[j]) {
        return 0;
      }
    }
  }

  return 1;
}

int main() {
  char s[1000];
  int ok = 0;
  char * p;
  char maxis[1000];
  int maxi = 0;

  cin.getline(s, 256);

  p = strtok(s, " ");

  while (p) {
    if (unice(p)) {
      int n = strlen(p);
      if (n > maxi) {
        maxi = n;
        strcpy(maxis, p);
        ok = 1;
      }
    }

    p = strtok(0, " ");
  }

  if (ok) {
    cout << maxis;
  } else {
    cout << -1;
  }

  return 0;
}