void prefix(int n, int k, int & x) {
  int p = 1;
  
  for (int i = 0; i < k; i++) {
    p = p * 10;
  }
  while (n >= p) {
    n = n / 10;
  }
  x = n;
}

