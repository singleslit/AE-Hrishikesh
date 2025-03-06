vector<ll> VOD(ll n) {
    string s = to_string(n);
    vector<ll> digits(s.size());
    transform(s.begin(), s.end(), digits.begin(), [](char c) { return (c - '0'); });
    return digits;
}
