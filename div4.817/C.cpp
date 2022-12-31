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
    map<string, V<int>> m;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < n; ++j) {
            string s;
            cin >> s;
            m[s].pb(i);
        }
    }
    int d[3] = {0};
    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->second.size() == 1)
            d[it->second[0]]+=3;
        else if (it->second.size() == 2) {
            d[it->second[0]]++;
            d[it->second[1]]++;
        }
    }
    cout << d[0] << " " << d[1] << " " << d[2] << endl;
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
