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
    V<int> a(n), b(n), v(n);
    for (auto& x : a)
        cin >> x;
    for (auto& x : b)
        cin >> x;
    for (int i = 0; i < n; ++i)
        v[i] = b[i]-a[i];
    sort(all(v));
    int l = 0, r = n-1;
    int ans = 0;
    while (l < r) {
        if (v[r]+v[l] >= 0) {
            ans++;
            --r;
            ++l;
        } else
            ++l;
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
