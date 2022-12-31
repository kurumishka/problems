#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n;
    cin >> n;
    V<pair<int,int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    sort(all(a));
    int len = a.size();
    while (a[len-2].first != 0) {
        a[len-2].first--;
        a[len-1].first--;
        sort(all(a));
    }
    cout << a[len-1].second << endl;
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
