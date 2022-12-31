#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define int long long

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    V<V<int>> a(n, V<int>(m));
    int f = -1e18, s = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            if (a[i][j] > f) {
                f = a[i][j];
                int a = i+1, b = j+1;
                s = max(a*b, (n-a+1)*b);
                s = max(s, (m-b+1)*a);
                s = max((n-a+1)*(m-b+1), s);
            }
        }
    }
    cout << s << endl;
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
