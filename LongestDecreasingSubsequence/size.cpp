int lds(vii &v) {
    vector<int>ans;
    int pos;
    for (int num:v) {
        auto it=rub(ans,num);
        if (it==ans.rbegin()) {
            ans.pb(num);
        }else {
            *(it - 1) = num;
        }
    }
    return sz(ans);
}
