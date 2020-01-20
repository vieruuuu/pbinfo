void aranjare(int v[], int n) {
  int k1 = 0, k2 = 0;
  int v2[10000], v1[10000];

  for (int i = 0; i < n; i++) {
    int x = v[i];

    if (x % 2 == 0) {
      v1[k2++] = x;
    } else {
      v2[k1++] = x;
    }

  }
  
  for (int i = k1; i < n; i++) {
    v[i] = v1[i - k1];
  }

  for (int i = 0; i < k1; i++) {
    v[i] = v2[i];
  }
}