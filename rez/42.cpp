void sterge(int v[], int & n, int i, int j) {
  int _i = i;
  for (int p = j + 1; p <= n; p++) {
    v[i] = v[p];
    i++;
  }
  n = n - (j - _i + 1);
}

