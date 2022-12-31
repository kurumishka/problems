#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    V<int> a(n);
    int j = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i+1 <= k && a[i] <= k) ++j;
    }
    cout << k-j << endl;
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
