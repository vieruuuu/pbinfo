void P(int x[], int n, int & mini, int & maxi, int & sum) {
  maxi = x[0];
  mini = x[0];
  sum = x[0];

  for (int i = 1; i < n; i++) {
    int nr = x[i];

    sum = sum + nr;

    if (maxi < nr) {
      maxi = nr;
    }

    if (mini > nr) {
      mini = nr;
    }
  }
}

