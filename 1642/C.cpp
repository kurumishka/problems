#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long


void solve() {
    int n, x;
    cin >> n >> x;
    V<int> a(n);
    map<int,int> c;
    for (auto& x : a) {
        cin >> x;
        ++c[x];
    }
    int ans = 0;
    sort(all(a));
    for (int i = 0; i < n; ++i) {
        if (c[a[i]] <= 0) continue;
        int f = a[i]*x;
        --c[a[i]];
        if (c.count(f) && c[f] > 0)
            --c[f];
         else
            ++ans;
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
    while(t--)

    solve();
    return 0;
}
