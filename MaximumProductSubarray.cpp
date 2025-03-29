int MPS(vii A) {//Using 2P approach ; the most intuitive and best. It essentially creates suffix and prefix product to find the greatest prod
  int n = A.size(), res = A[0], l = 0, r = 0;
  fori(i,0,n) {
    l =  (l ? l : 1) * A[i];
    r =  (r ? r : 1) * A[n - 1 - i];
    res = max(res, max(l, r));
  }
  return res;
}


