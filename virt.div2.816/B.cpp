#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;
#define int long long

void solve() {
    int n, k, b, s;
    cin >> n >> k >> b >> s;
    V<int> ans(n);
    ans[0] = k*b+k-1;
    int sum = ans[0];
    for (int i = 1; i < n; ++i) {
        ans[i] = k-1;
        sum += ans[i];
    }
    int i = 0;
    if (sum < s) {
        cout << -1 << endl;
        return;
    }
    while (sum != s && i != n) {
        int d = min(k-1, sum-s);
        ans[i] -= d;
        sum -= d;
        ++i;
    }
    if (sum != s) {
        cout << -1 << endl;
    } else {
        for (auto& x : ans)
            cout << x << " ";
        cout << endl;
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
