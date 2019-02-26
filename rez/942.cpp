#include <iostream>

using namespace std;

int main() {
  unsigned int n, c, doi = 0, trei = 0;
  cin >> n;
  
  while(n != 0){
    c = n % 10;
    if (c == 2) {
      ++doi;
    } else {
      ++trei;
    }
    n = n / 10;
  }
  if (doi == trei) {
    cout << "2 3";
  } else if (doi > trei) {
    cout << 2;
  } else {
    cout << 3;
  }
  
  return 0;
}