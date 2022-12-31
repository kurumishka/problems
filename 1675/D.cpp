#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


map<int, V<int>> path;
map<int, set<int>> g;
int col;

inline void dfs(int node) {
    path[col].pb(node);
    for (auto& child : g[node]) {
        dfs(child);
        ++col;
    }
}

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    int top_node;
    for (int i = 0; i < n; ++i) {
        if (a[i] == i+1) top_node = i+1;
        else g[a[i]].insert(i+1);
    }
    col = 0;
    dfs(top_node);
    cout << path.size() << endl;
    for (auto it = path.begin(); it != path.end(); ++it) {
        cout << it->second.size() << endl;
        for (auto& x : it->second)
            cout << x << " ";
        cout << endl << endl;
    }
    g.clear();
    path.clear();
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
