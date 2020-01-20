int cmmnr(int n) {
  int nr = 0;
  int v[11] = {
    0
  };

  while (n != 0) {
    int c = n % 10;
    v[c] = v[c] + 1;
    n = n / 10;
  }

  if (v[0] > 0) {
    for (int i = 1; i <= 9; i++) {
      if (v[i] > 0) {
        nr = nr * 10 + i;
        v[i] = v[i] - 1;
        break;
      }
    }
  }
  
  for (int i = 0; i <= 9; i++) {
    for (int j = 1; j <= v[i]; j++) {
      nr = nr * 10 + i;
    }
  }
  return nr;
}