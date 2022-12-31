#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

V<V<int>> g;
set<int> v;

bool check(int node) {
    v.insert(node);
    bool ok = (g[node].size() <= 2);
    for (auto& n : g[node])
        if (!v.count(n))
            ok = ok && check(n);
    return ok;
}

map<pair<int,int>, int> ans;

void dfs(int node, int num) {
    v.insert(node);
    int next = (num == 5 ? 2 : 5);
    for (auto& x : g[node])
        if (!v.count(x)) {
            ans[{node, x}] = num;
            ans[{x, node}] = num;
            dfs(x, next);
        }
}

void solve() {
    int n;
    cin >> n;
    g = V<V<int>> (n+1, V<int>(0));
    V<pair<int,int>> f (n-1);
    for (int i = 0; i < n-1; ++i) {
        cin >> f[i].first >> f[i].second;
        g[f[i].first].pb(f[i].second);
        g[f[i].second].pb(f[i].first);
    }
    auto ok = check(1);
    if (!ok) {
        cout << -1 << endl;
        goto end;
    }
    v.clear();
    int start;
    for (int i = 1; i <= n; ++i) {
        if (g[i].size() == 1) {
            start = i;
            break;
        }
    }
    dfs(start, 2);
    for (auto& x : f)
        cout << ans[x] << " ";
    cout << endl;
    end:
    g.clear();
    v.clear();
    ans.clear();
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
