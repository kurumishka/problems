#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    V<int> ans(n, 0xffffff);
    V<set<int>> g(n+1);
    V<V<int>> w(n+1, V<int>(n+1));
    for (int i = 0; i < q; ++i) {
        int a, b, d;
        cin >> a >> b >> d;
        w[a][b] = w[b][a] = d;
        ans[a-1] &= d;
        ans[b-1] &= d;
        g[a].insert(b);
        g[b].insert(a);
    }
    for (int i = 0; i < n; ++i) {
        if (g[i+1].count(i+1)) continue;
        for (auto& y : g[i+1])
            ans[i] &= ans[y-1];
    }
    for (auto& x : ans)
        cout << x << " ";
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
