struct dsu
{
  vii parent, size;
  dsu(int n)
  {
    parent.resize(n);
    size.assign(n, 1);
    rep(i, 0, n) parent[i] = i;
  }

  int leader(int x)
  {
    if (parent[x] == x) return x;
    return parent[x] = leader(parent[x]);
  }

  bool merge(int x, int y)
  {
    x = leader(x);
    y = leader(y);
    if (x == y) return false;
    if (size[x] < size[y]) swap(x, y);
    parent[y] = x;
    size[x] += size[y];
    return true;
  }

  bool same(int x, int y)
  {
    return (leader(x) == leader(y));
  }

  int setsz(int x)
  {
    return size[leader(x)];
  }
};
