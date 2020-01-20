int NrDiv(int n) {

  int k = 0, d;

  for (d = 1; d * d < n; ++d) {
    if (n % d == 0) {
      k += 2;
    }
  }

  if (d * d == n) {
    ++k;
  }

  return k;

}

int NextNrDiv(int n) {

  int m = n + 1;
  int kn = NrDiv(n);

  while (kn != NrDiv(m)) {
    ++m;
  }

  return m;

}

int PrevNrDiv(int n) {

  int m = n - 1;
  int kn = NrDiv(n);

  while (kn != NrDiv(m) && m >= 0) {
    --m;
  }

  return m;

}
