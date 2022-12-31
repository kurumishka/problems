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

void solve() {
    int n;
    cin >> n;
    V<pair<int,int>> v(n);
    V<V<int>> a(n, V<int>, 0);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].second;
        v[i].first = i+1;
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
