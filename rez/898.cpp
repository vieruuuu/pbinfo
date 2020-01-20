int sumfactcif(int n) {
  int s = 0;

  if (n == 0) {
    return 1;
  }

  while (n != 0) {
    int f = 1;
    for (int i = 0; i <= n % 10; i++) {
      if (i != 0) {
        f = f * i;
      }
    }
    s = s + f;
    n = n / 10;
  }
  return s;
}