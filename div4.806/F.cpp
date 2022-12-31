#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long

int bs(V<int>& v, int x) {
    int k = 0;
    for (int z = v.size(); z>=1; z/=2)
        while(k+z < v.size() && v[k+z] < x) k+=z;
    if (k == -1 || v[k] >= x) return 0;
    return k+1;
}

void solve() {
    int n;
    cin >> n;
    V<int> a(n), v;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] < i+1) {
            v.pb(i+1);
        }
    }
    if (v.size() == 0) {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] < i+1) {
            int k = bs(v, a[i]);
            ans+=k;
        }
    }
    cout << ans << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    solve();
    return 0;
}
