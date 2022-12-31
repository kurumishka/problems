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
    int n;
    cin >> n;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    int l = -1;
    for (int i = 0; i < n; ++i)
        if (a[i] != 0) {
            l=i;
            break;
        }
    if (l == n-1 || l == -1) {
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    for (int i = l; i < n-1; ++i) {
        if (a[i] == 0) {
            ++ans;
            ++a[i];
            --a[l];
        }
        if (a[l] == 0) ++l;
    }
    for (int i = l; i < n-1; ++i)
        ans+=a[i];
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
