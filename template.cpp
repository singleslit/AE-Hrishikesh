#include <bits/stdc++.h>
const int MOD=1e9+7;
const int MAX_N = 1e9;
#define trainingForICPC() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define vll vector<ll>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vvll vector<vll>
#define vii vector<int>
#define vvii vector<vii>
#define vecs vector<string>
#define vpii vector<pair<int,int>>
#define vvpii vector<vpii>
#define vvpll vector<vpll>
#define vpll vector<pair<ll,ll>>
#define vbl vector<bool>
#define vvbl vector<vector<bool>>
#define usetii unordered_set<int>
#define usetll unordered_set<ll>
#define setii set<int>
#define setll set<ll>
#define setpll set<pll>
#define setpii set<pii>
#define usetpll unordered_set<pll>
#define usetpii unordered_set<pii>
#define forl(i,a,b) for(ll i=a;i<b;i++)
#define fori(i,a,b) for(int i=a;i<b;i++)
#define rforl(i,a,b) for(ll i=a;i>b;i--)
#define rfori(i,a,b) for(int i=a;i>b;i--)
#define sz(a) a.size()
#define pb push_back
#define eb emplace_back
#define lexi lexicographical_compare
#define all(x) (x).begin(), (x).end()
#define suml(v) accumulate(all(v),0LL)
#define sumi(v) accumulate(all(v),0)
#define lb(v,target) lower_bound(all(v), target)
#define lbset(s,target) s.lower_bound(target)
#define ub(v,target) upper_bound(all(v), target)
#define ubset(s,target) s.upper_bound(target)
#define JOIN_STRINGS(vec) std::accumulate((vec).begin(), (vec).end(), std::string(""))
#define vin(v) for(int i=0; i<(int)v.size(); i++) cin>>v[i];//only for 0th based indexing inputs
#define vout(v) for(int i=0; i<(int)v.size(); i++) cout<<v[i]<<' '//only for 0th based indexing outputs
#define INF 1e9+100
#define debug(x) cerr << #x << " = " << x << endl;
#define add(a,b) a=(a+(b))%MOD
using namespace std;

✅ Y Combinator Recursive Lambda
template <typename Func>
struct YCombinator {
    Func func;
    explicit YCombinator(Func&& f) : func(forward<Func>(f)) {}
    template <typename... Args>
    decltype(auto) operator()(Args&&... args) {
        return func(*this, forward<Args>(args)...);
    }
};

//Most optimised sieve algo, based on 30 Wheel Factorization.
vector<int> prime_sieve(int n) {
    if (n <= 2) return {};  // No primes below 2
    if (n == 2) return {2}; // Special case for smallest prime

    // Step 1: Precompute the numbers that are coprime to 2, 3, and 5
    constexpr int mod30table[8] = {1, 7, 11, 13, 17, 19, 23, 29};

    int size = (n + 29) / 30; // Compress the range
    vector<uint8_t> sieve(size, 0xFF); // Each byte holds 8 numbers
    sieve[0] &= ~1; // 1 is not prime

    int limit = sqrt(n);

    // Step 2: Sieve up to sqrt(n)
    for (int i = 0; i <= limit / 30; i++) {
        for (int mask = sieve[i]; mask > 0; mask &= (mask - 1)) {
            int idx = __builtin_ctz(mask); // Get the lowest set bit
            int prime = i * 30 + mod30table[idx];
            int prime2 = prime * 2;

            for (int j = (prime * prime) / 30; j < size; j += prime) {
                sieve[j] &= ~(1 << idx);
            }
        }
    }

    // Step 3: Collect prime numbers
    vector<int> primes = {2, 3, 5};
    for (int i = 0; i < size; i++) {
        for (int mask = sieve[i]; mask > 0; mask &= (mask - 1)) {
            int idx = __builtin_ctz(mask);
            int prime = i * 30 + mod30table[idx];
            if (prime > n) break;
            primes.push_back(prime);
        }
    }

    return primes;
}

//Tarjans Bridge Finding algo
int bridgec;
vector<int> graph[MAX_N];
int lvl [MAX_N];
int dp[MAX_N];
void visit(int u) {
    dp[u] = 0;
    for (auto v : graph[u]) {
        if (lvl[v] == 0) { // v is unvisited, so it's a child
            lvl[v] = lvl[u] + 1;
            visit(v);
            dp[u] += dp[v];  // Correctly accumulate child's dp into parent's dp
        } else if (lvl[v] < lvl[u]) {
            // Back–edge from u to an ancestor
            dp[u]++;
        } else if (lvl[v] > lvl[u]) {
            // An edge going downward (not the tree edge)
            dp[u]--;
        }
    }
    dp[u]--;  // Cancel the parent's edge (not a back-edge)

    if (lvl[u] > 1 && dp[u] == 0) {
        bridgec++;
    }
}
// Height of a tree Algorithm
int dfs(int node,int height) {
    int max_depth = height;
    for (auto neigh:graph[node]) {
        max_depth=max(max_depth,dfs(neigh,height+1));
    }
    return max_depth;
}

//Longest Increasing Subsequence using Binary Search (NlogN)
int find_lis(const vii &a) {
    setii L;
    for (int num:L) {
        auto it = lbset(L);
        if (it==L.end()) {
            L.pb(num);
        }else {
            *it=num;
        }
    }
    return sz(L);
}

// For USACO
void setIO(string name = "") {
    if (name.size()) {
        freopen((name + ".in").c_str(), "r", stdin);
        freopen((name + ".out").c_str(), "w", stdout);
    }
}
//LIS Algo when only length is asked (Coded on my own)
int lis(const vii &a,const int x) {
    setii s;
    for(int elem:a) {
        auto it = lbset(s,elem);
        if (it==s.end()) {
            s.erase(it);
        }
        s.insert(elem);
    }
    return sz(s);
}

vector<ll> numberToVector(ll n) {
    string s = to_string(n);
    vector<ll> digits(s.size()); // Allocate required space

    transform(s.begin(), s.end(), digits.begin(), [](char c) { return (c - '0'); });

    return digits;
}


int main() {
    trainingForICPC();
    //Let's go
}
