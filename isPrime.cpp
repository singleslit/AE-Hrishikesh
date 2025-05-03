// Modular power using binary exponentiation
ll modpow(ll base, ll exp, ll mod) {
  ll res = 1;
  base %= mod;
  while (exp > 0) {
    if (exp%2==1) res = (res * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return res;
}
//To check if a number is prime or not using Miller Rabin
bool isPrime(ll n) {
  if (n < 2) return false;
  const vll base = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
  each(elem,base) {
    if (n % elem == 0) return n == elem;
  }

  ll d = n - 1, s = 0;
  while (d % 2 == 0) d /= 2, ++s;

  auto modmul = [](ll a, ll b, ll m) -> ll {
    return (__int128)a * b % m;
  };

  each(elem,base) {
    if (elem >= n) break;
    ll x = modpow(elem, d, n);
    if (x == 1 || x == n - 1) continue;

    bool composite = true;
    rep(r, 1, s) {
      x = modmul(x, x, n);
      if (x == n - 1) {
	composite = false;
	break;
      }
    }

    if (composite) return false;
  }

  return true;
}
