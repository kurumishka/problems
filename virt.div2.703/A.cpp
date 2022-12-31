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
    int left = 0, i = 0;
    bool ok = true;
    for (auto& x : a) {
        cin >> x;
        if (x > i) left+=(x-i);
        else {
            if (i-x > left) {
                ok = false;
            } else left-=(i-x);
        }
        ++i;
    }
    cout << (ok ? "yes" : "no") << endl;
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
