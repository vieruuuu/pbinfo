int cifreImpare(int n) {
  int nr = -1;
  int p = 1;
  int g = 0;

  while (n) {
    if (n % 2 == 0) {
      if (nr == -1) {
        nr = n % 10;
      } else {
        nr = nr + n % 10 * p;

      }
      p = p * 10;
    } else {
      g = 1;
    }
    n = n / 10;
  }
  if (g == 1) {
    return nr;
  }
  return -1;
}
