int prim(int n) {

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return n > 1;
}

int a_prim(int n) {

  for (int i = 2; i * i < n; i++) {
    if (n % i == 0) {
      if (prim(i) && prim(n / i)) {
        return 1;
      }
    }
  }
  return 0;

}

