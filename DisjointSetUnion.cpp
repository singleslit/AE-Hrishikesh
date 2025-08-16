struct dsu
{
  vll parent, size;
  ll component_count;
  ll max_comp_size;
  
  dsu(ll n)
  {
    parent.resize(n);
    size.assign(n, 1);
    rep(i,n) parent[i] = i;
    component_count=n;
    max_comp_size=1;
  }

  ll leader(ll x)
  {
    if (parent[x] == x) return x;
    return parent[x] = leader(parent[x]);
  }

  bool merge(ll x, ll y)
  {
    x = leader(x);
    y = leader(y);
    if (x == y) return false;
    if (size[x] < size[y]) swap(x, y);
    parent[y] = x;
    size[x] += size[y];
    max_comp_size=max(max_comp_size,size[x]);
    component_count--;
    return true;
  }

  bool same(ll x, ll y)
  {
    return (leader(x) == leader(y));
  }

  ll setsz(ll x)
  {
    return size[leader(x)];
  }
  
};
