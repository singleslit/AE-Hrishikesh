struct wDSU {
    vll parent, rankv;
    vll diff_weight;   // weight[x] - weight[parent[x]]
    ll component_count;

    wDSU(ll n) {
        parent.resize(n);
        rankv.assign(n, 0);          // rank initially 0
        diff_weight.assign(n, 0);    // diff zero

        rep(i,0,n) parent[i] = i;

        component_count = n;
    }

    // Path compression + accumulate weights
    ll leader(ll x) {
        if (parent[x] == x) return x;
        ll p = leader(parent[x]);
        diff_weight[x] += diff_weight[parent[x]];
        return parent[x] = p;
    }

    // Returns weight[x] - weight[root(x)]
    ll weight(ll x) {
        leader(x);
        return diff_weight[x];
    }

    // Merge with constraint: value[y] - value[x] = w
    bool merge(ll x, ll y, ll w) {
        ll rx = leader(x);
        ll ry = leader(y);

        ll wx = weight(x);
        ll wy = weight(y);

        if (rx == ry) return false;

        // diff = value[ry] - value[rx]
        ll diff = w + wx - wy;

        // UNION BY RANK
        if (rankv[rx] < rankv[ry]) {
            swap(rx, ry);
            diff = -diff;        // because direction flipped
        }

        // Attach ry under rx
        parent[ry] = rx;
        diff_weight[ry] = diff;

        if (rankv[rx] == rankv[ry]) rankv[rx]++;

        component_count--;
        return true;
    }

    bool same(ll x, ll y) {
        return leader(x) == leader(y);
    }

    // value[y] - value[x]
    ll diff(ll x, ll y) {
        return weight(y) - weight(x);
    }
};
