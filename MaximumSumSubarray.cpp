int MSS(const vii &a) {
    int ans = 0, maxi = 0;
    fi(sz(a)) {
        if (ans + a[i] >= 0) ans += a[i], maxi = max(maxi, ans);
        else ans = 0;
    }
    return maxi;
}
