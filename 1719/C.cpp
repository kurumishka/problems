#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

struct st {
    int win, bef;
    st(int a, int b) { win = a; bef = b; }
    int count(int k) {
        if (k-bef <= 0) return 0;
        int r = k-bef;
        return min(win, r);
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    V<st> ans(n, st(0,0));
    set<int> us;
    V<int> near (n), a(n), ind(n+1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ind[a[i]] = i;
    }
    stack<int> s;
    for (int i = n-1; i >= 0; --i) {
        while (s.size() && s.top() < a[i])
            s.pop();
        if (s.empty()) {
            if (a[i] != n) near[i] = -1;
            else near[i]=0;
        }
        else
            near[i] = ind[s.top()];
        s.push(a[i]);
    }
    for (int i = 0; i < n; ++i) {
        int x = a[i];
        us.insert(x);
        auto l = us.upper_bound(x);
        if (near[i] == -1) {
            continue;
        }
        if (near[i] == 0) {
            ans[i].win=1e9*2;
            ans[i].bef=(i==0 ? i : i-1);
            continue;
        }
        if (l == us.end()) {
            ans[i].win = near[i]-i;
            if (i==0) ans[i].win--;
            ans[i].bef = (i==0 ? i : i-1);
        }
    }
    for (int i = 0; i < q; ++i) {
        int j, k;
        cin >> j >> k;
        cout << ans[j-1].count(k) << endl;
    }
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
