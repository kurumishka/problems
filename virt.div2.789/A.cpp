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
    map<int, int> m;
    bool same = false;
    for (auto& x : a) {
        cin >> x;
        ++m[x];
        if (m[x] >= 2)
            same=true;
    }
    if (m[0] != 0) {
        cout << n-m[0] << endl;
        return;
    }
    cout << (same ? n : n+1) << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
