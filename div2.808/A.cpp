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
    for (int i = 1; i < n; ++i) {
        if (a[i] == 0) continue;
        if (a[i-1] == 0 && a[i] != 0) {
            cout << "NO" << endl;
            return;
        }
        if ((a[0] == 0 && a[i] != 0) || a[i]%a[0] != 0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
