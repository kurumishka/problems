#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    V<int> sums(n+1, 0);
    sort(all(a), [](int& a, int& b) { return a > b;});
    for (int i = 0; i < n; ++i)
        sums[i] = (i == 0 ? a[i] : sums[i-1]+a[i]);
    for (int i = 0; i < q; ++i) {
        int x, y;
        cin >> x >> y;
        int d = 0;
        if (x-y > 0)
            d = sums[x-y-1];
        int ans = sums[x-1]-d;
        cout << ans << endl;
    }
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
