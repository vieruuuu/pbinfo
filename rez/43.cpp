double nreal(int x, double y) {
  while (y >= 1) {
    y = y / 10;
  }
  return x + y;
}

