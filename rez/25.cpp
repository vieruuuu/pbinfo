int cmmnr(int n) {
  int v[12];
  int k = 1;

  while (n != 0) {
    v[k] = n % 10;
    k++;
    n /= 10;
  }

  int s;

  do {
    s = 0;
    for (int j = 1; j < k - 1; j++) {
      if (v[j] < v[j + 1]) {
        int x = v[j];
        v[j] = v[j + 1];
        v[j + 1] = x;
        s++;
      }
    }
  } while (s != 0);

  s = 0;

  for (int j = 1; j < k; j++) {
    s = s * 10 + v[j];
  }

  return s;
}