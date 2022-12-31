#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n;
    cin >> n;
    V<V<int>> g(n+1);
    for (int i = 0; i < n-1; ++i) {
        int a, b;
        cin >> a >> b;
        g[a].pb(b);
        g[b].pb(a);
    }
    V<V<int>> d(n+1, V<int>(n+1));
    set<int> vis;
    function<void(int, int, int)> Dfs = [&](int cur, int node, int f) {
        vis.insert(node);
        d[cur][node] = f;
        for (auto& x : g[node])
            if(!vis.count(x))
                Dfs(cur, x, f+1);
    };
    for (int i = 1; i <= n; ++i) {
        Dfs(i, i, 0);
        vis.clear();
    }
    int f = 1e9;
    for (int i = 1; i <= n; ++i) {
        int m = 0;
        multiset<int> e;
        for (int j = 1; j <= n; ++j)
            if (d[i][j] != 0)
                e.insert(d[i][j]);
        for (auto& x : e)
            m = max(m, (int)e.count(x));
        f = min(f, m);
    }
    cout << f << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
