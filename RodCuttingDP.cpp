int cut(int left,int right){
  if (left+1==right) return 0;
  if (dp[left][right]!=-1) return dp[left][right];
  int ans=INF;
  fori(i,left+1,right){
    ans=min(ans,(cutsarray[right]-cutsarray[left])+cut(left,i)+cut(i,right));
  }
  return dp[left][right]=ans;
}
