int Fibo(int n) {
  int a = 1;
  int b = 1;
  int c = 2;

  n = n - 2;

  while (n > 0) {
    c = a + b;

    if (c % 2 == 1) {
      n--;
    }

    a = b;
    b = c;
  }
  return b;
}
