// Problem: C. Contrast Value
// Contest: Codeforces - Educational Codeforces Round 148 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1832/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

/*-----------------------------------------------------------त्वदीयं वस्तु गोविन्द: तुभ्यमेव समर्पये---------------------------------------------------*/ 
#include <bits/stdc++.h>
using namespace std;

// Type aliases
using ll = long long;
using ull = unsigned long long;
using lld = long double;

using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using vc = vector<char>;
using vvc = vector<vector<char>>;
using vs = vector<string>;
using pi = pair<int, int>;
using vpi = vector<pi>;
using si = set<int>;
using spi = set<pi>;
using mpii = map<int, int>;
using mpci = map<char, int>; 

// Macros
#define take(v) for (auto &i : v) cin >> i;
#define f(i, x, y) for (int i = x; i < y; i++)
#define pb push_back
#define ff first
#define ss second
#define sortv(x) sort(x.begin(), x.end())
#define sortd(x) sort(x.begin(), x.end(), greater<>())
#define mod 1000000007
#define setbits(x) __builtin_popcount(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve() {
    ll n ;
    cin >> n;
    vll v(n);
    take(v);
    auto it = unique(all(v));
    v.erase(it,v.end());
    n = v.size();
    ll ans = n;
    f(i,0,n-2){
    	 ans -= v[i]<v[i+1]&&v[i+1]<v[i+2];
    	 ans -= v[i]>v[i+1]&&v[i+1]>v[i+2];
    }
    cout << ans << endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
