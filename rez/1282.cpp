int nr_cif_zero(long n) {
  int nr = 0, cif;

  if (n == 0) {
    nr = 1;
  }

  while (n != 0) {
    cif = n % 10;
    if (cif == 0) {
      nr = nr + 1;
    }
    n = n / 10;
  }

  return nr;
}