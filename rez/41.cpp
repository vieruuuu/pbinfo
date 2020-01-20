void F(int n, int a[], int & k) {
  int ok = 0;

  k = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      k = k * 10 + a[i];
      ok = 1;
    }
  }
  if (!ok) {
    k = -1;
  }
}

