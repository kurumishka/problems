#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    int k = max(x,y);
    if (min(x,y) != 0 || k == 0 || (n-1)%k) {
        cout << -1 << endl;
        return;
    }
    int cur = 1;
    cout << 1 << " ";
    for (int i = 1; i < n-1; ++i) {
        if (i%k == 0)
            cur += (cur != 1 ? k : k+1);
        cout << cur << " ";
    }
    cout << endl;
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
