
// ----------------------------------------------------------------------------------------
//template to print the prime factors and its exponents as pairs
vpll primeFactors(ll n) {
  vpll factors;
  for (ll i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      ll cnt = 0;
      while (n % i == 0) {
	n /= i;
	cnt++;
      }
      factors.pb({i, cnt});
    }
  }
  if (n > 1) factors.pb({n, 1});
  return factors;
}
// ----------------------------------------------------------------------------------------
