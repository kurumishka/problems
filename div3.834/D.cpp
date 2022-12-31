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
    cin >>n;
    V<int> a(n/2);
    set<int> s, av;
    for (auto& x : a)
        cin >> x;
    for (auto& x : a) {
        if (s.count(x)) {
            cout << -1 << endl;
            return;
        }
        s.insert(x);
    }
    if (!s.count(n)) {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n; ++i)
        if (!s.count(i))
            av.insert(i);

}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
