struct dsu
{
  vll parent, size;
  ll component_count;
  ll largest_component;
  
  dsu(ll n)
  {
    parent.resize(n);
    size.assign(n, 1);
    rep(i,n) parent[i] = i;
    component_count=n-1;//for 1th based indexing graphs
    largest_component=1;
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
    largest_component=max(largest_component,size[x]);
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
