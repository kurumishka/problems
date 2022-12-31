#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long


void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    int v = 0, e = 0, l = 0;
    for (auto& x : a)
        cin >> x;
    for (int i = 1; i < n-1; ++i) {
        if (a[i]%2 == 0) ++v;
        if (a[i] >= 2) ++e;
        if (a[i] >= 1) ++l;
    }
    if (v == 0 && (e == 0 || (e == 1 && l == 1))) {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    for (int i = 1; i < n-1; ++i)
        ans += (a[i]+a[i]%2)/2;
    cout << ans << endl;
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
