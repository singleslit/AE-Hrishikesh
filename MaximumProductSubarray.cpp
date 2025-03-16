int MPS(const vll &a){
    ll n1=-1, n2=-1, zeropos=-1, negseen=-1;
    int128 ans = -INF, prod = 1;
    vector<int128> pm(sz(a));
    fori(i,0,sz(a)){
        if (a[i] == 0){
            n1 = -1; n2 = -1;
            zeropos = i;
            prod = 1;
            pm[i] = 0;
            ans = max(ans, pm[i]);
        }
        else if (a[i] < 0 && n1 == -1){
            n1 = i;
            negseen = 1;
            prod *= a[i];
            pm[i] = prod;
            ans = max(ans, pm[i]);
        }
        else if (a[i] < 0 && n1 != -1 && n2 == -1){
            n2 = i;
            negseen = 2;
            prod *= a[i];
            pm[i] = prod;
            ans = max(ans, pm[i]);
        }
        else if (a[i] < 0 && n1 != -1 && n2 != -1){
            prod *= a[i];
            pm[i] = prod;
            negseen += 1;
            if (isEven(negseen)){
                if (n1 - 1 >= 0) ans = max(ans, pm[i] / pm[n1 - 1]);
                else ans = max(ans, pm[i]);
            } else {
                if (n2 - 1 >= 0) ans = max(ans, pm[i] / pm[n2 - 1]);
                else ans = max(ans, pm[i]);
            }
        }
        else {
            prod *= a[i];
            pm[i] = prod;
            ans = max(ans, pm[i]);
        }
    }
    return ans;
}
