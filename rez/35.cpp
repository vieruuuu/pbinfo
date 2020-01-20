int count(double a[], int n) {
  double s = 0;

  for (int i = 0; i < n; i++) {
    s = s + a[i];
  }

  double ma = s / n;
  int k = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= ma) {
      k++;
    }
  }

  return k;
}

