int lds(vii v) {
    set<int>ans;
    int pos;
    fori(i,0,sz(v)) {
        if (i==0) {ans.insert(v[i]);continue;}
        pos=distance(begin(ans),ubset(ans,v[i]))-1;
        if (pos==-1) {
            ans.insert(v[i]);
        }else {
            auto it = next(begin(ans),pos);
            ans.erase(it);
            ans.insert(v[i]);
        }

    }
    cout<<sz(ans)<<endl;
}
