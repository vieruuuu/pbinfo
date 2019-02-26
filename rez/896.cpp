int fact(int n) {
  int s = 1, i;

  for (i = 1; i <= n; i++) {
    s = s * i;
  }

  return s;
}