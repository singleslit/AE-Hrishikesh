#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;
// using mint = modint1000000007;
// using mint = double;
#endif
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
#define len(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define sum(...) accumulate(all(__VA_ARGS__),0LL)
#define uniq(vec) sort(all(vec)); vec.erase(unique(all(vec)),end(vec))
#define rev(vec) reverse(vec.begin(), vec.end())
#define each(x, a) for(auto& x : a)
#define elif else if
#define pb push_back
#define eb emplace_back
#define lexi lexicographical_compare
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define Test int t; cin >> t; while(t--)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
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
#define rub(v,target) upper_bound(rall(v), target) //Equivalent to finding the largest element smaller than or equal to target
#define ubset(s,target) s.upper_bound(target)
//vector macros
#define ins(v,idx, value) (v).insert((v).begin() + (idx), value)
//for inserting an elem at an index in the vector
#define voc(str) (std::vector<std::decay_t<decltype(str[0])>>((str).begin(), (str).end()))
#define vjoin(v1, v2) (v1.insert(v1.end(), v2.begin(), v2.end()))
#define join(v) std::accumulate((vec).begin(), (vec).end(), std::string(""))
#define rotatel(v, k) rotate((v).begin(), (v).begin() + ((k) % (v).size()), (v).end())
#define rotater(v, k) rotate((v).rbegin(), (v).rbegin() + ((k) % (v).size()), (v).rend())
// ----------------------------------------------------------------------------------------
//math macros
#define manhdist(x1,y1,x2,y2) abs(x1-x2)+abs(y1-y2)
#define digitcount(n) ((n) == 0 ? 1 : (int)log10(abs(n)) + 1)
#define ceil(a, b) (((a) + (b) - 1) / (b))
// ----------------------------------------------------------------------------------------
//string macros
#define str(x) to_string(x)
// ----------------------------------------------------------------------------------------
//array macros
#define cleantable(m,v) memset(m,v,sizeof(m));
// ----------------------------------------------------------------------------------------
//character macros
#define ctoi(c) ((c) - '0')
// ----------------------------------------------------------------------------------------
using namespace std;
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
using vvcc = vector<vector<char>>;
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
using usetpll = unordered_set<pll>;
using usetpii = unordered_set<pii>;
using stkint = stack<int>;
using stkll = stack<ll>;
using stkpii = stack<pii>;
using stkpll = stack<pll>;
#define INF 1e18
#define NINF -1e18
// ----------------------------------------------------------------------------------------
template<class T> auto min(const T& a){ return *min_element(all(a)); }
template<class T> auto max(const T& a){ return *max_element(all(a)); }
template<class T> void chmin(T& a, T b) { if (a > b) a = b; }
template<class T> void chmax(T& a, T b) { if (a < b) a = b; }
template<class T, class U> bool chmin(T& a, const U& b){ if(a > T(b)){ a = b; return 1; } return 0; }
template<class T, class U> bool chmax(T& a, const U& b){ if(a < T(b)){ a = b; return 1; } return 0; }
template<class T>
using spq = priority_queue<T, vector<T>, greater<T>>;
 
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
    for (int32_t i = 0; i < vec.size(); i++) {
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
template <typename T>
std::vector<T> vslice(const std::vector<T>& v, int l, int r) {
    if (l < 0) l += v.size();  // Handle negative indexing like Python
    if (r < 0) r += v.size();
    l = std::max(0, l);
    r = std::min((int)v.size(), r);
    if (l > r) l = r;  // Avoid invalid range
    return std::vector<T>(v.begin() + l, v.begin() + r);
}





struct IoSetup {
    IoSetup() {
        cin.tie(nullptr);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(15);
        cerr << fixed << setprecision(15);
    }
} iosetup;


struct dsu
{
  vii parent,size;
  dsu(int n)
  {
    parent.resize(n);
    size.assign(n,1);
    rep(i,n) parent[i]=i;
  }

  int leader(int x)
  {
    if (parent[x]==x) return x;
    return parent[x]=leader(parent[x]);
  }

  bool merge(int x,int y)
  {
    x=leader(x);
    y=leader(y);
    if (x==y) return false;
    if (size[x]<size[y]) swap(x,y);
    parent[y]=x;
    size[x]+=size[y];
    return true;
  }

  bool same(int x, int y)
  {
    return leader(x)==leader(y);
  }

  int setsz(int x)
  {
    return size[leader(x)];
  }
  
};


int main()
{
  Test
    {
      
    }
  return 0;
}


