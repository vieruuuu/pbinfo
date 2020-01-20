#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char s[1000];
  char * p;

  cin.getline(s, 256);

  char voc[] = "aeiou";
  
  p = strtok(s, voc);

  int maxi = strlen(p);
  char maxis[256];

  strcpy(maxis, p);

  while (p) {
    int n = strlen(p);

    if (n >= maxi) {
      maxi = n;
      strcpy(maxis, p);
    }

    p = strtok(0, voc);
  }

  cout << maxis;

  return 0;
}