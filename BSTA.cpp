//Classic template

template <typename F>
ll bsta(F check, ll ok, ll ng, bool check_ok = true) {
  if (check_ok) assert(check(ok));
  while (abs(ok - ng) > 1) {
    ll x = (ok + ng) / 2;
    (check(x) ? ok : ng) = x;
  }
  return ok;
}

