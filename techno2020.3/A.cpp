#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS 1000000007
#define FIXED(x) cout << fixed << setprecision(17) << x << endl
#define V(T) vector<T>
#define F first
#define S second

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].F >> v[i].S;
    sort(all(v));
    pair<int,int> f = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i].F > f.F && v[i].S < f.S) {
            f = v[i];
        }
    }
    int ans = v.back().F-f.S;
    if (ans < 0) ans = 0;
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
