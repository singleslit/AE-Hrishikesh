#include <bits/stdc++.h>
using namespace std;

#define overload4(_1,_2,_3,_4,name,...) name
#define overload3(_1,_2,_3,name,...) name
#define rep1(n) for(ll i=0;i<n;++i)
#define rep2(i,n) for(ll i=0;i<n;++i)
#define rep3(i,a,b) for(ll i=a;i<b;++i)
#define rep4(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep1(n) for(ll i=n;i--;)
#define rrep2(i,n) for(ll i=n;i--;)
#define rrep3(i,a,b) for(ll i=b;i-->(a);)
#define rrep4(i,a,b,c) for(ll i=(a)+((b)-(a)-1)/(c)*(c);i>=(a);i-=c)
#define repsq(i, n) for (ll i = 1; ((i) * (i) < n); ++i)
#define rrep(...) overload4(__VA_ARGS__,rrep4,rrep3,rrep2,rrep1)(__VA_ARGS__)
#define each1(i,a) for(auto&&i:a)
#define each2(x,y,a) for(auto&&[x,y]:a)
#define each3(x,y,z,a) for(auto&&[x,y,z]:a)
#define each4(w,x,y,z,a) for(auto&&[w,x,y,z]:a)
#define each(...) overload5(__VA_ARGS__,each4,each3,each2,each1)(__VA_ARGS__)
#define all1(i) begin(i),end(i)
#define all2(i,a) begin(i),begin(i)+a
#define all3(i,a,b) begin(i)+a,begin(i)+b
#define all(...) overload3(__VA_ARGS__,all3,all2,all1)(__VA_ARGS__)
#define rall1(i) rbegin(i),rend(i)
#define rall2(i,a) rbegin(i),rbegin(i)+a
#define rall3(i,a,b) rbegin(i)+a,rbegin(i)+b
#define rall(...) overload3(__VA_ARGS__,rall3,rall2,rall1)(__VA_ARGS__)
#define len(x) (int)(x).size()
#define sum(...) accumulate(all(__VA_ARGS__),0LL)
#define uniq(vec) sort(all(vec)); vec.erase(unique(all(vec)),end(vec))
#define rev(vec) reverse(vec.begin(), vec.end())
#define elif else if
#define pb push_back
#define eb emplace_back
#define lexi lexicographical_compare
#define Test int t; cin >> t; while(t--)
#define dbg(...) cout << #__VA_ARGS__ << " = ", _print(__VA_ARGS__)
#define sint(...) int __VA_ARGS__; in(__VA_ARGS__)
#define sll(...) ll __VA_ARGS__; in(__VA_ARGS__)
#define sstr(...) string __VA_ARGS__; in(__VA_ARGS__)
#define sch(...) char __VA_ARGS__; in(__VA_ARGS__)
#define sdbl(...) double __VA_ARGS__; in(__VA_ARGS__)
#define sld(...) ld __VA_ARGS__; in(__VA_ARGS__)
#define svll(n, v) vll v(n); scan(v)
#define svii(n, v) vii v(n); scan(v)
#define svec(type, n, v) vector<type> v(n); scan(v)
#define s1vll(n,v) vll v(n + 1); rep(i, 1, n + 1) cin >> v[i];
#define s1vii(n,v) vii v(n + 1); rep(i, 1, n + 1) cin >> v[i];
// ----------------------------------------------------------------------------------------
#define FLUSH cin.ignore(numeric_limits<streamsize>::max(), '\n') //Forget whatever is there in the current line and go to the next line. Use cin.ignore() for ignorning the very next character.
#define avoidBlanks while (cin.peek() == '\n') cin.ignore()
// ----------------------------------------------------------------------------------------
//binarySearch macros
// ----------------------------------------------------------------------------------------
#define lb(v,target) lower_bound(all(v), target)
#define rlb(v,target) lower_bound(rall(v), target)
#define lbset(s,target) s.lower_bound(target)
#define ub(v,target) upper_bound(all(v), target)
#define lbidx(v,target) lb(v,target)-v.begin()
#define ubidx(v,target) ub(v,target)-v.begin()
#define rub(v,target) upper_bound(rall(v), target) //Equivalent to finding the largest element smaller than or equal to target
#define ubset(s,target) s.upper_bound(target)
//vector macros
#define ins(v,idx, value) (v).insert((v).begin() + (idx), value)
//for inserting an elem at an index in the vector
#define voc(str) (std::vector<std::decay_t<decltype(str[0])>>((str).begin(), (str).end()))
#define vjoin(v1, v2) (v1.insert(v1.end(), v2.begin(), v2.end()))
#define rotatel(v, k) rotate((v).begin(), (v).begin() + ((k) % (v).size()), (v).end())
#define rotater(v, k) rotate((v).rbegin(), (v).rbegin() + ((k) % (v).size()), (v).rend())
// ----------------------------------------------------------------------------------------
//math macros
#define manhdist(x1,y1,x2,y2) abs(x1-x2)+abs(y1-y2)
#define digitcount(n) ((n) == 0 ? 1 : (int)log10(abs(n)) + 1)
#define cdiv(a, b) (((a) + (b) - 1) / (b))
// ----------------------------------------------------------------------------------------
//string macros
#define str(x) to_string(x)
#define tolower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)

// ----------------------------------------------------------------------------------------
//array macros
#define cleantable(m,v) memset(m,v,sizeof(m));
// ----------------------------------------------------------------------------------------
//character macros
#define ctoi(c) ((c) - '0')
// ----------------------------------------------------------------------------------------
//bit macros
#define bit(x, i) (((x) >> (i)) & 1)
#define llsetbit(x) __builtin_popcountll(x)
#define setbit(x) __builtin_popcount(x)
#define lsb(x) ((x) & -(x))
#define msb(x) ((x) == 0 ? -1 : 63 - __builtin_clzll(x))
// ----------------------------------------------------------------------------------------
//recursion macros
#define rfun(name, ret_type, ...) \
    std::function<ret_type(__VA_ARGS__)> name = [&](__VA_ARGS__) -> ret_type


//
#define print_range(v, i, j) copy((v).begin() + (i), (v).begin() + (j), ostream_iterator<decltype((v)[0])>(cout, " "))

//
const int dx4[4] = {1, 0, -1, 0}, dy4[4] = {0, 1, 0, -1};
const int dx8[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy8[8] = {0, 1, 1, 1, 0, -1, -1, -1};

// ----------------------------------------------------------------------------------------
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using vch = vector<char>;
using vvcc = vector<vch>;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using pdd = pair<long double, long double>;
using pii = pair<int, int>;
using vvll = vector<vll>;
using vii = vector<int>;
using vvii = vector<vii>;
using vecs = vector<string>;
using vpii = vector<pair<int, int>>;
using vvpii = vector<vpii>;
using vch = vector<char>;
using vvch = vector<vector<char>>;
using vpll = vector<pair<ll, ll>>;
using vpci = vector<pair<char,int>>;
using vpcl = vector<pair<char,ll>>;
using vvpll = vector<vpll>;
using vbl = vector<bool>;
using vvbl = vector<vector<bool>>;
using usetii = unordered_set<int>;
using usetll = unordered_set<ll>;
using setii = set<int>;
using setll = set<ll>;
using setpll = set<pll>;
using setpii = set<pii>;
using setstr = set<string>;
using usetpll = unordered_set<pll>;
using usetpii = unordered_set<pii>;
using stkint = stack<int>;
using stkll = stack<ll>;
using stkpii = stack<pii>;
using stkpll = stack<pll>;
static constexpr ll inf  = 1000000000000000000LL;
static constexpr ll ninf  = -1000000000000000000LL;
// ----------------------------------------------------------------------------------------
template<class T> auto vmin(const T& a){ return *min_element(all(a)); }
template<class T> auto vmax(const T& a){ return *max_element(all(a)); }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > T(b)){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < T(b)){ a = b; return 1; } return 0; }
template<typename T>
using maxpq = priority_queue<T>;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

 
//scan
inline void scan() {}
inline void scan(int &a) { std::cin >> a; }
inline void scan(unsigned &a) { std::cin >> a; }
inline void scan(long &a) { std::cin >> a; }
inline void scan(long long &a) { std::cin >> a; }
inline void scan(unsigned long long &a) { std::cin >> a; }
inline void scan(char &a) { std::cin >> a; }
inline void scan(float &a) { std::cin >> a; }
inline void scan(double &a) { std::cin >> a; }
inline void scan(long double &a) { std::cin >> a; }
inline void scan(std::vector<bool> &vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        int a;
        scan(a);
        vec[i] = a;
    }
}
inline void scan(std::string &a) { std::cin >> a; }
template <class T>
inline void scan(std::vector<T> &vec);
template <class T, size_t size>
inline void scan(std::array<T, size> &vec);
template <class T, class L>
inline void scan(std::pair<T, L> &p);
template <class T, size_t size>
inline void scan(T (&vec)[size]);
template <class T>
inline void scan(std::vector<T> &vec) {
    for (auto &i : vec) scan(i);
}
template <class T>
inline void scan(std::deque<T> &vec) {
    for (auto &i : vec) scan(i);
}
template <class T, size_t size>
inline void scan(std::array<T, size> &vec) {
    for (auto &i : vec) scan(i);
}
template <class T, class L>
inline void scan(std::pair<T, L> &p) {
    scan(p.first);
    scan(p.second);
}
template <class T, size_t size>
inline void scan(T (&vec)[size]) {
    for (auto &i : vec) scan(i);
}
template <class T>
inline void scan(T &a) {
    std::cin >> a;
}
inline void in() {}
template <class Head, class... Tail>
inline void in(Head &head, Tail &...tail) {
    scan(head);
    in(tail...);
}
 
//print
inline void print() { std::cout << ' '; }
inline void print(const bool &a) { std::cout << a; }
inline void print(const int &a) { std::cout << a; }
inline void print(const unsigned &a) { std::cout << a; }
inline void print(const long &a) { std::cout << a; }
inline void print(const long long &a) { std::cout << a; }
inline void print(const unsigned long long &a) { std::cout << a; }
inline void print(const char &a) { std::cout << a; }
inline void print(const char a[]) { std::cout << a; }
inline void print(const float &a) { std::cout << a; }
inline void print(const double &a) { std::cout << a; }
inline void print(const long double &a) { std::cout << a; }
inline void print(const std::string &a) {
    for (auto &&i : a) print(i);
}
template <class T>
inline void print(const std::vector<T> &vec);
template <class T, size_t size>
inline void print(const std::array<T, size> &vec);
template <class T, class L>
inline void print(const std::pair<T, L> &p);
template <class T, size_t size>
inline void print(const T (&vec)[size]);
template <class T>
inline void print(const std::vector<T> &vec) {
    if (vec.empty()) return;
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <typename T>
inline void print(const std::set<T>& s) {
    if (s.empty()) return;
    auto it = s.begin();
    print(*it);
    for (++it; it != s.end(); ++it) {
        cout << ' ';
        print(*it);
    }
}

template <class T>
inline void print(const std::deque<T> &vec) {
    if (vec.empty()) return;
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T, size_t size>
inline void print(const std::array<T, size> &vec) {
    print(vec[0]);
    for (auto i = vec.begin(); ++i != vec.end();) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T, class L>
inline void print(const std::pair<T, L> &p) {
    print(p.first);
    std::cout << ' ';
    print(p.second);
}
template <class T, size_t size>
inline void print(const T (&vec)[size]) {
    print(vec[0]);
    for (auto i = vec; ++i != end(vec);) {
        std::cout << ' ';
        print(*i);
    }
}
template <class T>
inline void print(const T &a) {
    std::cout << a;
}
inline void out() { std::cout << '\n'; }
template <class T>
inline void out(const T &t) {
    print(t);
    std::cout << '\n';
}
template <class Head, class... Tail>
inline void out(const Head &head, const Tail &...tail) {
    print(head);
    std::cout << ' ';
    out(tail...);
}

template<typename T>
void __print(const T &x) { cout << x; }

template<typename T, typename V>
void __print(const pair<T, V> &x) {
    cout << "{"; __print(x.first); cout << ", "; __print(x.second); cout << "}";
}

template<typename T>
void __print(const vector<T> &v) {
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        __print(v[i]);
        if (i + 1 != v.size()) cout << ", ";
    }
    cout << "]";
}

template<typename T>
void __print(const set<T> &v) {
    cout << "{";
    bool first = true;
    for (auto &i : v) {
        if (!first) cout << ", ";
        __print(i);
        first = false;
    }
    cout << "}";
}

template<typename T>
void __print(const multiset<T> &v) { __print(set<T>(v.begin(), v.end())); }

template<typename K, typename V>
void __print(const map<K, V> &v) {
    cout << "{";
    bool first = true;
    for (auto &i : v) {
        if (!first) cout << ", ";
        __print(i);
        first = false;
    }
    cout << "}";
}

template<typename T>
void __print(const unordered_set<T> &v) { __print(set<T>(v.begin(), v.end())); }

template<typename K, typename V>
void __print(const unordered_map<K, V> &v) { __print(map<K, V>(v.begin(), v.end())); }

void _print() { cout << endl; }

template<typename T, typename... V>
void _print(T t, V... v) {
    __print(t);
    if (sizeof...(v)) cout << ", ";
    _print(v...);
}
template<typename... Args>
void __print(const std::tuple<Args...>& t) {
    cout << "(";
    std::apply([](const auto&... args) {
        size_t i = 0;
        ((cout << (i++ ? ", " : "") << args), ...);
    }, t);
    cout << ")";
}

//redefined find template to give -1 if key not found.
template<typename Container, typename Key>
inline int find_idx(const Container &c, const Key &key) {
    auto it = std::find(std::begin(c), std::end(c), key);
    if (it == std::end(c)) return -1;
    return int(std::distance(std::begin(c), it));
}

template<typename T, typename Func>
T bitwise_bs(T start, int maxpow, Func works, bool maximise = true) {
    T cur = start;
    for (T step = (1LL << maxpow); step > 0; step >>= 1) {
        if (maximise) {
            if (works(cur + step)) cur += step;
        } else {
            if (works(cur - step)) cur -= step;
        }
    }
    return cur;
}

namespace rng = std::ranges;

template <typename R, typename T>
int rcnt(const R& r, const T& val) {
    return rng::count(r, val);
}

template <typename R, typename Pred>
int rcntif(const R& r, Pred pred) {
    return rng::count_if(r, pred);
}

template <typename R>
void rsort(R& r) {
    rng::sort(r);
}

template <typename R, typename Proj, typename Comp>
void rsort(R& r, Comp comp, Proj proj) {
    rng::sort(r, comp, proj);
}

template <typename T>
auto rmin(const T& a, const T& b) {
    return rng::min(a, b);
}

template <typename T>
auto rmax(const T& a, const T& b) {
    return rng::max(a, b);
}

template <typename T, typename Comp>
auto rmin(const T& a, const T& b, Comp comp) {
    return rng::min(a, b, comp);
}

template <typename T, typename Comp>
auto rmax(const T& a, const T& b, Comp comp) {
    return rng::max(a, b, comp);
}

template <typename Range>
auto rmin(const Range& r) {
    return rng::min(r);
}

template <typename Range>
auto rmax(const Range& r) {
    return rng::max(r);
}

template <typename Range, typename Proj>
auto rmin(const Range& r, Proj proj) {
    return rng::min(r, {}, proj);  // Default comparator, custom projection
}

template <typename Range, typename Proj>
auto rmax(const Range& r, Proj proj) {
    return rng::max(r, {}, proj);
}

template <typename R, typename Pred>
auto filter_view(R&& range, Pred&& pred) {
    return std::forward<R>(range) | std::views::filter(std::forward<Pred>(pred));
}

template <typename R, typename Func>
auto transform_view(R&& range, Func&& func) {
    return std::forward<R>(range) | std::views::transform(std::forward<Func>(func));
}

template <typename R>
auto take_view(R&& range, size_t n) {
    return std::forward<R>(range) | std::views::take(n);
}

template <typename R>
auto drop_view(R&& range, size_t n) {
    return std::forward<R>(range) | std::views::drop(n);
}


struct IoSetup {
    IoSetup() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(15);
        cerr << fixed << setprecision(15);
    }
} iosetup;

const int residues[] = {1, 7, 11, 13, 17, 19, 23, 29};

vll primes_upto(ll n) 
{
    if (n < 2) return {};

    bitset<50000001> is_prime;
    is_prime.set();
    is_prime[0] = 0; // 1 is not prime

    vll primes = {2, 3, 5};

    int sqrt_n = sqrt(n);

    for (int p = 7; p <= sqrt_n; p += 2) {
        // Check only numbers coprime to 2, 3, 5
        ll mod30 = p % 30;
        bool good = false;
        each(r,residues)
            if (r == mod30) good = true;

        if (!good) continue;
        if (!is_prime[p/2]) continue;

        for (int j = p*p; j <= n; j += 2*p) {
            is_prime[j/2] = 0;
        }
    }

    for (int p = 7; p <= n; p += 2) {
        int mod30 = p % 30;
        each(r,residues) {
            if (mod30 == r) {
                if (is_prime[p/2]) primes.push_back(p);
                break;
            }
        }
    }

    return primes;
}
ll power(ll a, ll b) 
{
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

string to_base(ll a,ll b)
{
  if (b<2 || b>36) throw invalid_argument("base out of range");
    if (a == 0) return "0";
    static const char* digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string s;
    while (a > 0) {
        int rem = a % b;
        s.pb(digits[rem]);
        a /= b;
    }
    reverse(all(s));
    return s;
}

template <typename T>
std::vector<T> vslice(const std::vector<T>& v, int l, int r) {
    if (l < 0) l += v.size();  // Handle negative indexing like Python
    if (r < 0) r += v.size();
    l = std::max(0, l);
    r = std::min((int)v.size(), r);
    if (l > r) l = r;  // Avoid invalid range
    return std::vector<T>(v.begin() + l, v.begin() + r);
}


vll all_divisors(ll n) {
    vll divs;
    for (ll i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) divs.push_back(n / i);
        }
    }
    sort(all(divs));
    return divs;
}

vll pqtop(priority_queue<ll>pq,ll k)
{
  vll res;
  while (k-- && !pq.empty()) {
    res.pb(pq.top());
    pq.pop();
  }
  return res;
}

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



struct pair_hash {
    size_t operator()(const pll& p) const {
        return hash<ll>()(p.first) ^ (hash<ll>()(p.second) << 1);
    }
};
inline string toLowerCopy(const string &s) {
    string t = s;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    return t;
}


// ──────────────────────────────────────────────────────────────────────────────
// modint<998244353>
// ──────────────────────────────────────────────────────────────────────────────
template<ll M>
struct modint {
    ll v;
    constexpr modint(ll _v = 0) noexcept {
        v = _v % M;
        if (v < 0) v += M;
    }
    // addition / subtraction
    constexpr modint& operator+=(modint o) noexcept {
        v += o.v;
        if (v >= M) v -= M;
        return *this;
    }
    constexpr modint& operator-=(modint o) noexcept {
        v -= o.v;
        if (v < 0) v += M;
        return *this;
    }
    // multiplication
    constexpr modint& operator*=(modint o) noexcept {
        v = (unsigned long long)v * o.v % M;
        return *this;
    }
    // binary exponentiation
    friend modint power(modint x, ll e) {
        modint res(1);
        while (e > 0) {
            if (e & 1) res *= x;
            x *= x;
            e >>= 1;
        }
        return res;
    }
    // inverse (M must be prime)
    friend modint inv(modint x) {
        return power(x, M - 2);
    }
    // division
    constexpr modint& operator/=(modint o) noexcept {
        return *this *= inv(o);
    }

    // lee-way operators
    constexpr modint operator+(modint o) const noexcept { return modint(*this) += o; }
    constexpr modint operator-(modint o) const noexcept { return modint(*this) -= o; }
    constexpr modint operator*(modint o) const noexcept { return modint(*this) *= o; }
    constexpr modint operator/(modint o) const noexcept { return modint(*this) /= o; }

    // I/O
    friend ostream& operator<<(ostream& os, modint x) {
        return os << x.v;
    }
    friend istream& operator>>(istream& is, modint& x) {
        ll t; is >> t; x = modint(t); return is;
    }
};

static constexpr ll MOD = 998244353;
using mint = modint<MOD>;


int main() 
{
	
}







  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

