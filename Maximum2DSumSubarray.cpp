ll max_2d_sum_subarray(vvll grid){
  ll rows = sz(grid);
  ll cols = grid.empty() ? 0 : sz(grid[0]);
  ll l=0,r=0,maxsum=-INF;
  fori(lp,0,cols){
    vll linear(rows,0);
    fori(rp,lp,cols){
      fori(sp,0,rows){
	linear[sp]+=grid[sp][rp];
      }
      ll currmax=linear[0],bestmax=linear[0];
      fori(i,0,rows){
	currmax=max(linear[i],currmax+linear[i]);
	bestmax=max(bestmax,currmax);
      }
      maxsum=max(maxsum,bestmax);
    }
    
  }
  return maxsum;
}
