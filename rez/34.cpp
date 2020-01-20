int interval(int a[], int n) {
  int nr = 0;
  int x = a[0];
  int y = a[n - 1];
  if (x > y) {
    int aux = x;
    x = y;
    y = aux;
  }
  for (int i = 0; i < n; i++) {
    if (x <= a[i] && a[i] <= y) {
      nr++;
    }
  }
  return nr;
}

