int oglindit(int n) {
  int inv = 0, cif;

  while (n != 0) {
    cif = n % 10;
    inv = inv * 10 + cif;
    n = n / 10;
  }

  return inv;
}
