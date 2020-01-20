void FRadical(int n, int & x, int & y) {
  int m;

  x = sqrt(n);

  if (x*x == n) {
    y = 1;
  } else {
    m = x*x;

    while (n % m) {
      x = x - 1;
      m = x * x;

      if (n % m == 0) {
        y = n / m;
      }
    }
  }
}

