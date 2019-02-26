#include <iostream>

using namespace std;

int main() {
  int G, O, C, P;
  
  cin >> C >> P;
  P = P / 2;
  O = P - C;
  G = C - O;

  cout << G << " " << O;
  return 0;
}