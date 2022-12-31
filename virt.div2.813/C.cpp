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
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    set<int> u, zeros;
    int ans = 0;
    for (int i = 0; i < n-1; ++i) {
        if (!zeros.count(a[i]))
            u.insert(a[i]);
        int l = a[i], r = a[i+1];
        if (zeros.count(l))
            l = 0;
        if (zeros.count(r))
            r = 0;
        if (l > r) {
            for (auto& x : u)
                zeros.insert(x);
            ans += u.size();
            u.clear();
        }
    }
    cout << ans << endl;
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
