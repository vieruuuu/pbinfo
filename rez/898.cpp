int sumfactcif(int n) {
  int P, S = 0, cif, i;
  if (n == 0) {
    S = 1;
  }
  while (n != 0) {
    cif = n % 10;
    n = n / 10;
    if (cif != 0) {
      P = 1;
      for (i = 1; i <= cif; i++) {
        P = P * i;
      }
      S = S + P;
    } else {
      S = S + 1;
    }
  }

  return S;
}