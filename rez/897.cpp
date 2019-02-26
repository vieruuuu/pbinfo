int sumcif(int n) {
  int s = 0, cif;

  while (n != 0) {
    cif = n % 10;
    s = s + cif;
    n = n / 10;
  }

  return s;
}
