int lis(vii& a) {
    vii lis;
    for (int x : a) {
        auto it = lower_bound(all(lis), x); // Find position for x
        if (it == lis.end()) lis.pb(x); // Extend LIS
        else *it = x; // Replace first element >= x
    }
    return lis;
}
