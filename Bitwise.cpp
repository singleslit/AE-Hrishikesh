// ----------------------------------------------------------------------------------------
//Bitwise template
template <typename T> constexpr bool ispow2(T n) { return n && !(n & (n - 1)); }

template <typename T> constexpr int setbitcnt(T n) {
  if constexpr (sizeof(T) <= 4) return __builtin_popcount(n);
  else return __builtin_popcountll(n);
}

template <typename T> constexpr T lowbit(T n) { return n & -n; }

template <typename T> constexpr int lg2flr(T n) {
  if (n == 0) return -1;
  if constexpr (sizeof(T) <= 4) return 31 - __builtin_clz(n);
  else return 63 - __builtin_clzll(n);
}

template <typename T> constexpr int lg2cl(T n) {
  return (n == 1) ? 0 : lg2flr(n - 1) + 1;
}

template <typename T> constexpr T hibit(T n) { return n ? T(1) << lg2flr(n) : 0; }

template <typename T> constexpr T togglebit(T n, int k) { return n ^ (T(1) << k); }

template <typename T> constexpr bool kthbit(T n, int k) { return (n >> k) & 1; }

template <typename T> constexpr T setbit(T n, int k) { return n | (T(1) << k); }

template <typename T> constexpr T clrbit(T n, int k) { return n & ~(T(1) << k); }

template <typename T> constexpr T gray(T n) { return n ^ (n >> 1); }

template <typename T> constexpr T gray2bin(T g) {
  T b = 0;
  while (g) b ^= g, g >>= 1;
  return b;
}

template <typename T> constexpr T xorupto(T n) {
  if (n % 4 == 0) return n;
  if (n % 4 == 1) return 1;
  if (n % 4 == 2) return n + 1;
  return 0;
}

template <typename T> constexpr T xorrange(T l, T r) {
  return xorupto(r) ^ xorupto(l - 1);
}

template <typename T> constexpr T fastmod(T a, T b) {
  return (b & (b - 1)) == 0 ? a & (b - 1) : a % b;
}

template <typename T> constexpr T revbits(T n) {
  T r = 0;
  int b = sizeof(T) * 8;
  while (b--) r = (r << 1) | (n & 1), n >>= 1;
  return r;
}

template <typename T> constexpr T nextsame(T n) {
  T c = n & -n, r = n + c;
  return r | (((n ^ r) >> 2) / c);
}

template <typename T> constexpr bool evenparity(T n) { return pcnt(n) % 2 == 0; }

template <typename T> constexpr void swpx(T &a, T &b) {
  if (&a != &b) a ^= b, b ^= a, a ^= b;
}
