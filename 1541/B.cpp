#pragma GCC optimize("O2")

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
    for (auto& x : a)
        cin >> x;
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
        int rest = a[i-1]-i%a[i-1];
        for (int j = rest; j <= n; j+=a[i-1]) {
            if (j <= i) continue;
            if (a[i-1]*a[j-1] == i+j) ++ans;
        }
    }
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
