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
    V<int> a(n);
    multiset<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        v.insert(a[i]);
    }
    auto l = v.begin(), r = --(v.end());
    int s = *r+*(--r)-*l-*(++l);
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
