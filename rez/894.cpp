void cifminmax(int n, int & cmax, int & cmin) {
  cmin = 9;
  cmax = 0;
  if (n == 0) {
    cmin = 0;
    cmax = 0;
  }
  
  while (n != 0) {
    int c = n % 10;
    if (c > cmax) {
      cmax = c;
    }
    if (c < cmin) {
      cmin = c;
    }
    n = n / 10;
  }
}

