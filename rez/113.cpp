int nr_cif(int n, int k) {
  int nr = 0;

  while (n != 0) {
    int c = n % 10;
    if (c != 0 && k % c == 0) {
      nr++;
    }
    n = n / 10;
  }

  return nr;
}

