#include <bits/stdc++.h>
const int MOD=1e9+7;
const int MAX_N = 1e9;
#define trainingForICPC() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define forl(i,a,b) for(ll i=a;i<b;i++)
#define fori(i,a,b) for(int i=a;i<b;i++)
#define rforl(i,a,b) for(ll i=a;i>b;i--)
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
#define scanv(v) for (auto &e : v) cin >> e
#define scanvv(vv) for (auto &v : vv) scanv(v)
#define print(x) cout << (x) << '\n'
#define printsp(x) cout << (x) << ' '
#define print2(x, y) cout << (x) << ' ' << (y) << '\n'
#define printv(v) for (auto &e : v) cout << e << ' '; cout << '\n'
#define printvv(vv) for (auto &v : vv) printv(v)
//sum macros
#define suml(v) accumulate(all(v),0LL)
#define sumi(v) accumulate(all(v),0)
//binarySearch macros
#define lb(v,target) lower_bound(all(v), target)
#define rlb(v,target) lower_bound(rall(v), target)
#define lbset(s,target) s.lower_bound(target)
#define ub(v,target) upper_bound(all(v), target) 
#define rub(v,target) upper_bound(rall(v), target) //Equivalent to finding the largest element smaller than or equal to target
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
//math macros
#define isEven(n) n%2==0
#define isOdd(n) n%2==1
#define manhdist(x1,y1,x2,y2) abs(x1-x2)+abs(y1-y2)
#define COD(n) ((n) == 0 ? 1 : (int)log10(abs(n)) + 1)
#define add(a,b) a=(a+(b))%MOD
#define ceil2(a, b) (((a) + (b) - 1) / (b))
//string macros
#define str(x) to_string(x)
//array macros
#define cleantable(m,v) memset(m,v,sizeof(m));
//debug macros
#define debug(x) cerr << #x << " = " << x << endl;
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

int main() {
  trainingForICPC();
 
}

