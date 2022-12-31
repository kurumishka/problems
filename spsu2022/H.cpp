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

void solve() {
    int n, m = 1e13;
    cin >> n;
    V<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] < m) m = v[i];
    }
    int g = 0;
    for (int i = 0; i < n; ++i)
        if (v[i] < 0) {
            g = i;
            break;
        }
    int cur = 0;
    for (int i = g; i < n; ++i) {
        cur = min(cur+v[i], v[i]);
        m = min(cur, m);
    }
    cout << m << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >>t;
    while(t--)
    solve();
    return 0;
}
