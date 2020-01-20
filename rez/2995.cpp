void inserare(int & n) {
  int v[11];
  int k = -1;

  for (int i = 0; i < 11; ++i) {
    v[i] = 0;
  }

  while (n) {
    v[++k] = n % 10;

    ++k;

    n = n / 10;
  }

  for (int i = 1; i < k - 1; i += 2) {

    int dif = v[i + 1] - v[i - 1];

    if (dif >= 0) {
      v[i] = dif;
    } else {
      v[i] = -dif;
    }

  }

  for (int i = k - 1; i > -1; --i) {
    n = n * 10 + v[i];
  }

  n = n;

}