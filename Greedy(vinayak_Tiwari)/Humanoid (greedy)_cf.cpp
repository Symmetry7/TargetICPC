// Problem: E. The Humanoid
// Contest: Codeforces - Codeforces Round  834 (Div. 3)
// URL: https://codeforces.com/contest/1759/problem/E
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
    ll n, h;
    cin >> n >> h;
    vll v(n);
    take(v);
    sortv(v);

    ll maxi = 0;
   vll  a = {2, 2, 3};

    do {
        ll c = h;
        ll k = 0;
        ll ans = 0;
        f(j,0,n) {
            if (v[j] < c) {
                c += v[j] / 2;
                ans++;
            } else {
                while (k < 3 && c <= v[j]) {
                    c *= a[k];
                    k++;
                }
                if (c > v[j]) {
                    c += v[j] / 2;
                    ans++;
                } else {
                    break;
                }
            }
        }
        maxi = max(maxi, ans);
    } while (next_permutation(all(a)));

    cout << maxi << endl;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();
}
