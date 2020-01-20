void sum_cif(int nr, int & s) {
  s = 0;

  while (nr != 0) {
    int c = nr % 10;

    s = s + c;

    nr = nr / 10;
  }
}