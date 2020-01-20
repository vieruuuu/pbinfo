void sumcif(int n, int & s, int & t) {
  s = 0;
  t = 0;
  
  while (n != 0) {
    int c = n % 10;

    if (c % 2 == 0) {
      s = s + c;
    } else {
      t = t + c;
    }

    n = n / 10;
  }
}