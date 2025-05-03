
//Maximum 2D Sum Subarray
ll max_2d_sum_subarray(const vvll& grid) {
  int rows = grid.size();
  if(rows == 0) return 0;
  int cols = grid[0].size();
  ll maxsum = LLONG_MIN;

  for (int lp = 0; lp < cols; lp++) {
    vll linear(rows, 0);
    for (int rp = lp; rp < cols; rp++) {
      for (int i = 0; i < rows; i++) {
        linear[i] += grid[i][rp];
      }
      ll currmax = linear[0];
      ll bestmax = linear[0];
      for (int i = 1; i < rows; i++) {
        currmax = max(linear[i], currmax + linear[i]);
        bestmax = max(bestmax, currmax);

      }
      maxsum = max(maxsum, bestmax);
    }
  }
  return maxsum;
}
