#include <bits/stdc++.h>
#define trainingForICPC() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rof(i,a,b) for(int i=a;i>b;i--)
#define sz(a) a.size()
#define felm(x) for(auto elem:x)
#define pb push_back
#define eb emplace_back
#define lexi lexicographical_compare
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define scan(x) int x;cin >> x
#define scan2(x, y) int x,y;cin >> x >> y
#define scan3(x, y, z) int x,y,z;cin >> x >> y >> z
#define lscan(x) ll x;cin >> x
#define lscan2(x, y) ll x,y;cin >> x >> y
#define lscan3(x, y, z) ll x,y,z;cin >> x >> y >> z
#define si1(x) cin >> x
#define si2(x, y) cin >> x >> y
#define si3(x, y, z) cin >> x >> y >> z
#define pi1(x) cout << (x) << '\n'
#define pi2(x, y) cout << (x) << ' ' << (y) << '\n'
#define Test int t; cin >> t; while(t--)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
// ----------------------------------------------------------------------------------------
//input macros
#define FLUSH cin.ignore(numeric_limits<streamsize>::max(), '\n') //Forget whatever is there in the current line and go to the next line. Use cin.ignore() for ignorning the very next character.
#define avoidBlanks while (cin.peek() == '\n') cin.ignore()
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
#define vsert(v,idx, value) (v).insert((v).begin() + (idx), value)
//for inserting an elem at an index in the vector
#define vts(v) string(all(v))
#define VOC(str) (std::vector<std::decay_t<decltype(str[0])>>((str).begin(), (str).end()))
#define vjoin(v1, v2) (v1.insert(v1.end(), v2.begin(), v2.end()))
#define join(v) std::accumulate((vec).begin(), (vec).end(), std::string(""))
#define vin(v) for(int i=0; i<(int)v.size(); i++) cin>>v[i];//only for 0th based indexing inputs
#define vout(v) for(int i=0; i<(int)v.size(); i++) cout<<v[i]<<' '//only for 0th based indexing outputs
#define rotatel(v, k) rotate((v).begin(), (v).begin() + ((k) % (v).size()), (v).end())
#define rotater(v, k) rotate((v).rbegin(), (v).rbegin() + ((k) % (v).size()), (v).rend())
#define sortall(v) sort(all(v))
#define dsortall(v) sort(all(v), greater<>())
// ----------------------------------------------------------------------------------------
//math macros
#define manhdist(x1,y1,x2,y2) abs(x1-x2)+abs(y1-y2)
#define digitCount(n) ((n) == 0 ? 1 : (int)log10(abs(n)) + 1)
#define add(a,b) a=(a+(b))%MOD
#define ceil2(a, b) (((a) + (b) - 1) / (b))
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
using vch = vector<char>;
using vvch = vector<vch>;
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
#define INF INT_MAX
#define NINF INT_MIN
// ----------------------------------------------------------------------------------------
template <typename K, typename V>
void print_map(const map<K, V>& m) {
    for (const auto& pair : m) {
        cout << pair.first << " => " << pair.second << endl;
    }
}

void print_stack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
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
        rep(i,0,n) {
            while (!stk.empty() && cmp(a[i], a[stk.top()])) stk.pop();
            res[i] = stk.empty() ? none_val : stk.top() + 1;
            stk.push(i);
        }
    } else {
        rof(i, n - 1, -1) {
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
//Maximum Sum Subarray
int MSS(const vii &a) {
    int ans = 0, maxi = 0;
    fi(sz(a)) {
        if (ans + a[i] >= 0) ans += a[i], maxi = max(maxi, ans);
        else ans = 0;
    }
    return maxi;
}
// ----------------------------------------------------------------------------------------
//Maximum 2D Sum Subarray
ll max_2d_sum_subarray(const vvll& grid) {
  int rows = grid.size();
  if(rows == 0) return 0;
  int cols = grid[0].size();
  ll maxsum = LLONG_MIN;

  for (int lp = 0; lp < cols; lp++) {
    vll linear(rows, 0);
    for (int rp = lp; rp < cols; rp++) {
      for (int i = 0; i < rows; i++) {
        linear[i] += grid[i][rp];
      }
      ll currmax = linear[0];
      ll bestmax = linear[0];
      for (int i = 1; i < rows; i++) {
        currmax = max(linear[i], currmax + linear[i]);
        bestmax = max(bestmax, currmax);

      }
      maxsum = max(maxsum, bestmax);
    }
  }
  return maxsum;
}
// ----------------------------------------------------------------------------------------
//Maximum 2D Sum Torus
int max_2d_sum_torus(vvii& mat) {
  int n = sz(mat);
  int maxsum = INT_MIN;
  rep(i,0,n) {
    vii temp(n,0);
    rep(j,0,n) {
      int r = (i+j)%n;
      rep(k,0,n) {
	temp[k] += mat[r][k];
      }
      vii ps(2*n + 1,0);
      rep(k,0,2*n) {
	ps[k+1] = ps[k] + temp[k%n];
      }
      deque<int> dq;
      dq.push_back(0);
      rep(k,1,2*n+1) {
	if (!dq.empty() && k-dq.front() > n) {
	  dq.pop_front();
	}
	maxsum = max(maxsum, ps[k]-ps[dq.front()]);
	while(!dq.empty() && ps[dq.back()] >= ps[k]) {
	  dq.pop_back();
	}
	dq.push_back(k);
      }
    }
  }
  return maxsum;
}
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
    const vll base = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    felm(base) {
        if (n % elem == 0) return n == elem;
    }

    ll d = n - 1, s = 0;
    while (d % 2 == 0) d /= 2, ++s;

    auto modmul = [](ll a, ll b, ll m) -> ll {
        return (__int128)a * b % m;
    };

    felm(base) {
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
//Remove Duplicates Keep Order
template <typename T>
vector<T> RDKO(const vector<T> &a) {
    unordered_set<T> seen;
    vector<T> res;
    felm(a) {
        if (seen.insert(elem).second) res.pb(elem);
    }
    return res;
}

// ----------------------------------------------------------------------------------------

int main() {
  trainingForICPC();
  Test{
    
  }
}
