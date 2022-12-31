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
    int n;
    cin >> n;
    V<int> a(n);
    int r = -1;
    int lr = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i]%2 == 0) {
            if (r == -1)
                lr = i;
            r = i;
        }
    }
    if (r==-1) {
        cout << n-1 << endl;
        for (int i = 1; i <= n-1; ++i)
            cout << i << " " << n << endl;
        return;
    }
    V<pair<int,int>> v;
    if (a[0]%2) {
        int md = 0;
        for (int i = 0; i < n; ++i)
            if (a[i]%2 && a[i] < a[md])
                md = i;
        if (md != 0)
            v.emplace_back(1, md+1);
        a[0] = a[md];
        for (int i = 0; i < n; ++i)
            if (a[i]%2 == 0) {
                v.emplace_back(1, i+1);
                a[i] = a[0];
            }
        for (int i = n-1; i >= 1; --i)
            if (a[i-1] > a[i]) {
                v.emplace_back(i, i+1);
                a[i-1] = a[i];
            }
    }
    else {
        for (int i = 0; i < n; ++i)
            if (a[i]%2 == 0 && i != r)
                v.emplace_back(i+1, r+1);
        for (int i = 0; i < n; ++i)
            if (a[i]%2)
                v.emplace_back(lr+1, i+1);
    }
    cout << v.size() << endl;
    for (auto& [l, r] : v)
        cout << l << " " << r << endl;
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
