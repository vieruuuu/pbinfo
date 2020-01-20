int interval(int n) {
  for (int x = n;; x++) {
    int d;
    for (d = 2; d * d <= x; d++) {
      if (x % d == 0) {
        break;
      }
    }
    if (d * d > x) {
      return x + 1;
    }
  }
}

