// ----------------------------------------------------------------------------------------
//Longest Increasing Subsequence
int LIS(vii& a) {
  vii lis;
  each(elem,a) {
    auto it = lb(lis, elem);
    if (it == lis.end()) lis.pb(elem);
    else *it = elem;
  }
  return len(lis);
}
