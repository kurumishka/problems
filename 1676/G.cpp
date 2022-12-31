#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


map<int, set<int>> m;
map<int,int> cols;
int ans;

inline int dfs(int node = 1) {
    int bal = cols[node];
    for (auto& child : m[node])
        bal += dfs(child);
    if (bal == 0) ++ans;
    return bal;
}

void solve() {
    int n;
    cin >> n;
    V<int> a(n-1);
    for (auto& x : a)
        cin >> x;
    string s;
    cin >> s;
    cols[1] = (s[0] == 'W' ? 1 : -1);
    for (int i = 0; i < n-1; ++i) {
        m[a[i]].insert(i+2);
        cols[i+2] = (s[i+1] == 'W' ? 1 : -1);
    }
    ans = 0;
    dfs();
    cout << ans << endl;
    m.clear();
    cols.clear();
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
