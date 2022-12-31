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
    int n, l, r;
    cin >> n >> l >> r;
    V<int> a(n);
    for (int i = 1; i <= n; ++i) {
        int d = l%i;
        int el;
        if (l%i == 0) el = l;
        else el = l+(i-(l%i));
        if (el > r) {
            cout << "NO" << endl;
            return;
        }
        a[i-1] = el;
    }
    cout << "YES" << endl;
    for (auto& x : a)
        cout << x << " ";
    cout << endl;
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
