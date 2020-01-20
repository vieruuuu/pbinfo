int sumcif(int n) {
  int s = 0;

  while (n != 0) {
    int cif = n % 10;
    s = s + cif;
    n = n / 10;
  }

  return s;
}
