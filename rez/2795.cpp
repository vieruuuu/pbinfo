int resturi (int n, int x, int y, int r) {
    int k = 0;
    for (int nr = r; nr <= n; nr+=y) {
        int rx = nr % x;
        
        if (rx == r) {
            k++;
        }
    }
    return k;
}

