//Maximum Sum Subarray
int max_sum_subarray(const vii &a) {
  int ans = 0, maxi = 0;
  rep(i,0,len(a)) {
    if (ans + a[i] >= 0) ans += a[i], maxi = max(maxi, ans);
    else ans = 0;
  }
  return maxi;
}
// ----------------------------------------------------------------------------------------
