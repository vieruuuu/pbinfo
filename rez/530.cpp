#include <iostream>

using namespace std;

int main() {
  int n, m, i, j = 0, k = 0, A[100000], B[100000], C[200000];

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> A[i];
  }

  cin >> m;

  for (i = 0; i < m; i++) {
    cin >> B[i];
  }

  i = 0;

  while (i < n && j < m) {
    if (A[i] < B[j] && i < n && j < m) {
      while (A[i] < B[j] && i < n) {
        C[k] = A[i], i++, k++;
      }
    }

    if (B[j] < A[i] && i < n && j < m) {
      while (B[j] < A[i] && j < m) {
        C[k] = B[j], j++, k++;
      }
    }

    if (A[i] == B[j]) {
      C[k] = A[i], i++, j++, k++;
    }
  }

  if (i < n) {
    for (int p = i; p < n; p++) {
      C[k] = A[p], k++;
    }
  }

  if (j < m) {
    for (int p = j; p < m; p++) {
      C[k] = B[p], k++;
    }
  }

  for (i = 0; i < k; i++) {
    cout << C[i] << ' ';
  }

  cout << '\n';

  k = 0;
  i = 0;
  j = 0;

  while (i < n && j < m) {
    if (A[i] < B[j] && i < n && j < m) {
      while (A[i] < B[j] && i < n) {
        i++;
      }
    }

    if (B[j] < A[i] && i < n && j < m) {
      while (B[j] < A[i] && j < m) {
        j++;
      }
    }

    if (A[i] == B[j]) {
      C[k] = A[i], i++, j++, k++;
    }
  }

  for (i = 0; i < k; i++) {
    cout << C[i] << ' ';
  }

  return 0;
}
