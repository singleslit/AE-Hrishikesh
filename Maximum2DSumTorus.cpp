//Maximum 2D Sum Torus
int max_2d_sum_torus(vvii& mat) {
  int n = len(mat);
  int maxsum = INT_MIN;
  rep(i,0,n) {
    vii temp(n,0);
    rep(j,0,n) {
      int r = (i+j)%n;
      rep(k,0,n) {
	temp[k] += mat[r][k];
      }
      vii ps(2*n + 1,0);
      rep(k,0,2*n) {
	ps[k+1] = ps[k] + temp[k%n];
      }
      deque<int> dq;
      dq.push_back(0);
      rep(k,1,2*n+1) {
	if (!dq.empty() && k-dq.front() > n) {
	  dq.pop_front();
	}
	maxsum = max(maxsum, ps[k]-ps[dq.front()]);
	while(!dq.empty() && ps[dq.back()] >= ps[k]) {
	  dq.pop_back();
	}
	dq.push_back(k);
      }
    }
  }
  return maxsum;
}
// ----------------------------------------------------------------------------------------
