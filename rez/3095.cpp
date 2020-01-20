#include <iostream>
#include <cstring>

using namespace std;

long long f(char n16[], int i, long long p) {

  if (i == 0) {
    return 0;
  }

  if (n16[i - 1] <= '9') {
    return f(n16, i - 1, p * 16) + (n16[i - 1] - '0') * p;
  }

  return f(n16, i - 1, p * 16) + (n16[i - 1] - 'A' + 10) * p;
}

int main() {

  long long n10;

  char n16[20];

  cin >> n16;
  n10 = f(n16, strlen(n16), 1);
  cout << n10;
}