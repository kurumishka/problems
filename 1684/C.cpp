#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define f first
#define s second

inline pair<int, int> get(V<int>& a, V<int> b) {
    auto res = make_pair<int,int>(-1,-1);
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) {
            if (res.f == -1){ res.f = i; }
            else if (res.s == -1) { res.s = i; }
            else break;
        }
    return res;
}
inline bool check(V<int>& a, V<int>& b){
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i])
            return false;
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    V<V<int>> a(n, V<int>(m)), b(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
        b[i] = a[i];
        sort(all(b[i]));
    }
    for (int i = 0; i < n; ++i) {
        auto res = get(a[i], b[i]);
        if (res.f != -1 || res.s != -1) {
            for (int h = 0; h < n; ++h)
                swap(a[h][res.f], a[h][res.s]);
            bool f = true;
            for (int h = 0; h < n; ++h)
                f = (f && check(a[h], b[h]));
            if (!f)
                cout << -1 << endl;
            else
                cout << res.f+1 << " " << res.s+1 << endl;
            return;
        }
    }
    cout << 1 << " " << 1 << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
