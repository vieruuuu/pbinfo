#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char s[201];
  int n = 0, suma = 0;
  
  cin.getline(s, 201);

  for (int i = 0; s[i]; i++) {
    if (!((s[i] == ' ' || s[i] >= 'A') && (s[i] <= 'Z' || strchr("aeiou", s[i])))) {
      suma = suma + s[i];
      n++;
    }
  }

  cout << char(suma / n);
}