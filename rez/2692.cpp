#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char s[256], a[130][256], * p;

  int n = 0;

  cin.getline(s, 256);

  p = strtok(s, " ");

  while (p) {
    strcpy(a[n++], p);
    p = strtok(0, " ");
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strlen(a[i]) < strlen(a[j]) || (strlen(a[i]) == strlen(a[j]) && strcmp(a[i], a[j]) > 0)) {
        swap(a[i], a[j]);
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << a[i] << endl;
  }
}