#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>

void solve() {
    int n;
    cin >> n;
    V(int) v(n);
    map<int,V(int)> m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]].pb(i+1);
    }
    int d = 1e9;
    int ans = -1;
    for (auto it = m.begin(); it != m.end(); it++) {
        if (it->second.size() == 1 && it->first < d) {
            d = it->first;
            ans = it->second[0];
        }
    }
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
