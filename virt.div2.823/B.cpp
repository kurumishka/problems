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
    for (auto& x : a) {
        cin >> x;
    }
    V<int> t(n);
    for (auto& x : t)
        cin >> x;
    V<int> z;
    for (int i = 0; i < n; ++i) {
        z.pb(a[i]-t[i]);
        z.pb(a[i]+t[i]);
    }
    sort(all(z));
    long double d = z[0]+z.back();
    cout << d/2.0 << endl;
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
