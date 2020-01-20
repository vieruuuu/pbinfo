int oglindit(int n) {
  int ogl = 0;

  while (n != 0) {
    int c = n % 10;
    ogl = ogl * 10 + c;
    n = n / 10;
  }

  return ogl;
}
