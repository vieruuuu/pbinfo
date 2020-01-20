int nrmaxim(int n) {
  int x = 1, k = 0;
  int nr = n;

  while (nr != 0) {
    x *= 10;
    k++;
    nr /= 10;
  }

  int maxi = n;

  nr = n;
  x /= 10;

  for (int i = 0; i < k; i++) {
    nr = (nr % 10) * x + nr / 10;

    if (maxi < nr) {
      maxi = nr;
    }

  }
  return maxi;
}