#include <bits/stdc++.h>
const int MOD=1e9+7;
const int MAX_N = 1e9;
#define trainingForICPC() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fori(i,a,b) for(int i=a;i<b;i++)
#define rfori(i,a,b) for(int i=a;i>b;i--)
#define fi(n) fori(i,0,n)
#define fj(n) fori(j,0,n)
#define fk(n) fori(k,0,n)
#define sz(a) a.size()
#define felm(x) for(auto elem:x)
#define pb push_back
#define eb emplace_back
#define lexi lexicographical_compare
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define scan(x) cin >> x
#define scan2(x, y) cin >> x >> y
#define scan3(x, y, z) cin >> x >> y >> z
#define scanv(v) for (auto &e : v) cin >> e
#define scanvv(vv) for (auto &v : vv) scanv(v)
#define print(x) cout << (x) << '\n'
#define printsp(x) cout << (x) << ' '
#define print2(x, y) cout << (x) << ' ' << (y) << '\n'
#define printv(v) for (auto &e : v) cout << e << ' '; cout << '\n'
#define printvv(vv) for (auto &v : vv) printv(v)
// ----------------------------------------------------------------------------------------
//sum macros
#define suml(v) accumulate(all(v),0LL)
#define sumi(v) accumulate(all(v),0)
//binarySearch macros
// ----------------------------------------------------------------------------------------
#define lb(v,target) lower_bound(all(v), target)
#define rlb(v,target) lower_bound(rall(v), target)
#define lbset(s,target) s.lower_bound(target)
#define ub(v,target) upper_bound(all(v), target) 
#define rub(v,target) upper_bound(rall(v), target) //Equivalent to finding the largest element smaller than or equal to target
// ----------------------------------------------------------------------------------------
#define ubset(s,target) s.upper_bound(target)
//vector macros
#define slice(vec,start,end) vii((vec).begin() + (start), (vec).begin() + (end))
#define vsert(v,idx, value) emplace(v.begin() + (idx), value)//for inserting an elem at an index in the vector
#define vts(v) string(all(v))
#define VOC(str) (std::vector<std::decay_t<decltype(str[0])>>((str).begin(), (str).end()))
#define vjoin(v1, v2) (v1.insert(v1.end(), v2.begin(), v2.end()))
#define join(v) std::accumulate((vec).begin(), (vec).end(), std::string(""))
#define join23(v) std::ranges::fold_left((vec), std::string{}, std::iplus<>())
#define vin(v) for(int i=0; i<(int)v.size(); i++) cin>>v[i];//only for 0th based indexing inputs
#define vout(v) for(int i=0; i<(int)v.size(); i++) cout<<v[i]<<' '//only for 0th based indexing outputs
#define rotatel(v, k) rotate((v).begin(), (v).begin() + ((k) % (v).size()), (v).end())
#define rotater(v, k) rotate((v).rbegin(), (v).rbegin() + ((k) % (v).size()), (v).rend())
#define dsort(v) sort(all(v), greater<>())
#define sortp2(v) sort((v).begin(), (v).end(), [](auto &a, auto &b) { return a.second < b.second; })
#define dsortp2(v) sort((v).begin(), (v).end(), [](auto &a, auto &b) { return a.second > b.second; })
// ----------------------------------------------------------------------------------------
//math macros
#define isEven(n) n%2==0
#define isOdd(n) n%2==1
#define manhdist(x1,y1,x2,y2) abs(x1-x2)+abs(y1-y2)
#define COD(n) ((n) == 0 ? 1 : (int)log10(abs(n)) + 1)
#define add(a,b) a=(a+(b))%MOD
#define ceil2(a, b) (((a) + (b) - 1) / (b))
// ----------------------------------------------------------------------------------------
//string macros
#define str(x) to_string(x)
// ----------------------------------------------------------------------------------------
//array macros
#define cleantable(m,v) memset(m,v,sizeof(m));
// ----------------------------------------------------------------------------------------
//debug macros
#define debug(x) cerr << #x << " = " << x << endl;
// ----------------------------------------------------------------------------------------
using namespace std;
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using pii = pair<int, int>;
using vvll = vector<vll>;
using vii = vector<int>;
using vvii = vector<vii>;
using vecs = vector<string>;
using vpii = vector<pair<int, int>>;
using vvpii = vector<vpii>;
using vpll = vector<pair<ll, ll>>;
using vvpll = vector<vpll>;
using vbl = vector<bool>;
using vvbl = vector<vector<bool>>;
using usetii = unordered_set<int>;
using usetll = unordered_set<ll>;
using setii = set<int>;
using setll = set<ll>;
using setpll = set<pll>;
using setpii = set<pii>;
using usetpll = unordered_set<pll>;
using usetpii = unordered_set<pii>;
using stkint = stack<int>;
using stkll = stack<ll>;
using stkpii = stack<pii>;
using stkpll = stack<pll>;
#define INF LLONG_MAX
#define NINF LLONG_MIN
// ----------------------------------------------------------------------------------------
//Bitwise template
template <typename T> constexpr bool ispow2(T n) { return n && !(n & (n - 1)); }

template <typename T> constexpr int pcnt(T n) {
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
// ----------------------------------------------------------------------------------------
//Longest Increasing Subsequence
int LIS(vii& a) {
    vii lis;
    felm(a) {
        auto it = lb(lis, elem);
        if (it == lis.end()) lis.pb(elem);
        else *it = elem;
    }
    return sz(lis);
}
// Monotonic Stack Template
// ----------------------------------------------------------------------------------------
template<typename Compare>
vll mono_stack(const vll &a, bool rev, Compare cmp, ll none_val) {
    int n = sz(a);
    vll res(n, 0);
    stkint stk;

    if (!rev) {
        fi(n) {
            while (!stk.empty() && cmp(a[i], a[stk.top()])) stk.pop();
            res[i] = stk.empty() ? none_val : stk.top() + 1;
            stk.push(i);
        }
    } else {
        rfori(i, n - 1, -1) {
            while (!stk.empty() && cmp(a[i], a[stk.top()])) stk.pop();
            res[i] = stk.empty() ? none_val : stk.top() + 1;
            stk.push(i);
        }
    }
    return res;
}

inline vll PSE(const vll &a) { return mono_stack(a, 0, [](ll a, ll b) { return a < b; }, 0); }
inline vll NSE(const vll &a) { return mono_stack(a, 1, [](ll a, ll b) { return b >= a; }, sz(a) + 1); }
inline vll PGE(const vll &a) { return mono_stack(a, 0, [](ll a, ll b) { return a > b; }, 0); }
inline vll NGE(const vll &a) { return mono_stack(a, 1, [](ll a, ll b) { return b <= a; }, sz(a) + 1); }
// ----------------------------------------------------------------------------------------
// Modular power using binary exponentiation
ll modpow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (isOdd(exp)) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}
// ----------------------------------------------------------------------------------------
//To check if a number is prime or not using Miller Rabin
bool isPrime(ll n) {
    if (n < 2) return false;

    felm({2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (n % elem == 0) return n == elem;
    }

    ll d = n - 1, s = 0;
    while (d % 2 == 0) d /= 2, ++s;

    auto modmul = [](ll a, ll b, ll m) -> ll {
        return (__int128)a * b % m;
    };

    felm({2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
        if (elem >= n) break;
        ll x = modpow(elem, d, n);
        if (x == 1 || x == n - 1) continue;

        bool composite = true;
        fori(r, 1, s) {
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
//number to vector of digits template
template <typename T>
vii vod(T num) {
    string s = str(num); // using str(x) macro
    vii d; d.reserve(sz(s)); // sz(a) macro for size
    felm(s) d.pb(elem - '0'); // felm(x) and pb macros
    return d;
}
// ----------------------------------------------------------------------------------------
// bool to check if a number is a perfect square or not
bool isPerfSquare(int num) {
    if (num < 0) return false;
    if (num == 0 || num == 1) return true;

    int x = num;
    int y = (x + 1) >> 1;

    while (y < x) {
        x = y;
        y = (x + num / x) >> 1;
    }

    return x * x == num;
}
// ----------------------------------------------------------------------------------------
//number to Binary String template
template<typename T>
string numToBinary(T n) {
    if (n == 0) return "0";
    string bin;
    while (n) {
        bin += (n & 1) ? '1' : '0';
        n >>= 1;
    }
    reverse(all(bin));
    return bin;
}
// ----------------------------------------------------------------------------------------
//Temporary functions created for the question:

// ----------------------------------------------------------------------------------------
int main() {
  trainingForICPC();
 
}

