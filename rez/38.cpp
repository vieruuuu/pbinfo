void shift(int x[], int n) {
  int aux = x[0];
  for (int i = 0; i < n; i++) {
    x[i] = x[i + 1];
  }
  x[n - 1] = aux;
}

