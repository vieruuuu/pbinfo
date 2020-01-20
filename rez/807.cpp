#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char s[1000];

  cin.getline(s, 256);

  char * p;

  p = strtok(s, " ");

  while (p) {
    int n = strlen(p);

    if (n == 3) {
      cout << '*' << ' ';
    } else {
      cout << p << ' ';
    }

    p = strtok(0, " ");
  }

  return 0;
}