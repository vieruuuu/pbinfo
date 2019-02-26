int concat(int n, int m) {
  int a = m, p = 1;

  while (a != 0) {
    a = a / 10;
    p = p * 10;
  }

  n = n * p + m;
  return n;
}