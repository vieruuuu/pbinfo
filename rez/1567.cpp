#include <iostream>

using namespace std;

int main() {
    int x, S = 0;
    cin >> x;
    while (x != 0) {
        int cx = x;
        if (x < 10) {
            cin >> x;
            continue;
        }
        while (cx > 99) {
            cx = cx / 10;
        }
        S = S + cx;
        cin >> x;
    }
    cout << S;
    return 0;
}