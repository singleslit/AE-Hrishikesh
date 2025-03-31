ll sterlingNumber(const int n, const int k){
  vvll dp(n+1,vll(k+1,0));
  forl(i,1,n+1){
    forl(j,1,k+1){
      if (i==j || j==1) dp[i][j]=1;
      else dp[i][j] = dp[i-1][j-1] + (j*dp[i-1][j]);
    }
  }
  return dp[n][k];
}
