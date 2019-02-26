#include <iostream>

using namespace std;

int main() {
    int n, i, cif, cifmax;
    long long num, rez = 0;

    cin >> n;

    for (i = 1; i <= n; ++i) {
        cin >> num;
        cifmax = 0;

        while (num) {
            cif = num % 10;
            if (cif > cifmax) {
                cifmax = cif;
            }
            num /= 10;
        }

        rez = rez * 10 + cifmax;
    }
    rez *= rez;
    cout << rez;

    return 0;
}