template <typename T>
vii vod(T num) {
    string s = str(num); // using str(x) macro
    vii d; d.reserve(sz(s)); // sz(a) macro for size
    felm(s) d.pb(elem - '0'); // felm(x) and pb macros
    return d;
}
