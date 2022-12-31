#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS (1e9+7)

// --------- vector operators ----------------
template<class T>
inline ostream& operator<<(ostream& os, V<T>& vec) {
    for(auto& x : vec) os << x << " ";
    return os; }

template<class T>
inline istream& operator>>(istream& is, V<T>& vec) {
    for(auto &x : vec) is >> x;
    return is; }
// ------------------------------------------

#define int long long

map<int, V<int>> m;

void gen() {
    for (int i = 0; i <= 2*1e5; ++i) {
        for (int j = 0; j <= 30; ++j)
            if (i & (1 << j))
                m[j].pb(i);
    }
    for (auto it = m.begin(); it != m.end(); ++it)
        sort(all(it->second));
}

void solve() {
    int l, r;
    cin >> l >> r;
    int ans = 1e9;
    for (auto it = m.begin(); it != m.end(); ++it) {
        int left = -1, right = -1, sz = it->second.size();
        for (int z = sz; z >= 1; z/=2)
            while(z+left < sz && it->second[z+left] < l) left+=z;
        for (int z = sz; z >= 1; z/=2)
            while(z+right < sz && it->second[z+right] <= r) right+=z;

        ++right;
        ++left;
        int all = right-left;

        ans = min(ans, r-l+1-all);
    }
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    gen();

    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
