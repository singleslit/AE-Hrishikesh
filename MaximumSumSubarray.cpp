int MSS(const vii &a){
    int ans=0; int maxi=0;
    fori(i,0,sz(a)){
        if (ans + a[i] >= 0) ans += a[i], maxi = max(maxi, ans);
        else ans = 0;
    }
    return maxi;
} 
