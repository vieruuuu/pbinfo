#include <iostream>

using namespace std;

int main() {
    long long n, nr = 0, cn, p = 1;
    int k = 0;

    cin >> n;
    cn = n;
    
    while (cn != 0) {
        ++k;
        cn = cn / 10;
    }
    for (int i = 0; i < k; ++i) {
        int c = n % 10;
        if (i != (k - 1) / 2) {
            nr = nr + c * p;
            p = p * 10;
        }
        n = n / 10;
    }
    cout << nr;
    return 0;
}