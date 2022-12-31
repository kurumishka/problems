#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    V<V<int>> a(n, V<int>(m));
    int ed = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            char b; cin >> b;
            a[i][j] = (int)(b-'0');
            if (a[i][j]) ++ed;
        }
    bool have = false;
    for (int i = 1; i < n; ++i)
        for (int j = 1; j < m; ++j) {
            int s = a[i][j]+a[i-1][j]+a[i-1][j-1]+a[i][j-1];
            if (s <= 2) {
                have = true;
                break;
            }
        }
    if (ed == n*m) {
        cout << n*m-2 << endl;
    } else if (have) {
        cout << ed << endl;
    } else {
        cout << ed-1 << endl;
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
