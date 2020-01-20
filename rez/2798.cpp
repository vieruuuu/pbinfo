int echilibrat(int n) {
  int sp = 0, si = 0, sem = 1;
  do {
    if (sem == 1) {
      sp = sp + n % 10;
    } else {
      si = si + n % 10;
    }
    sem = -sem;
    
    n = n / 10;
    
  }
  while (n);
  
  return (sp % 2 == 0 && si % 2 == 1);
}

