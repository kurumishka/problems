#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    map<int,int> have;
    for (auto& x : a) {
        cin >> x;
        ++have[x];
    }
    V<int> v;
    for (int i = 0; i < n; ++i) {
        if (have[a[i]] > 1 || a[i] > n) {
            v.pb(a[i]);
            have[a[i]]--;
        }
    }
    sort(all(v));
    int j = 1, ans = 0;
    while (have[j] == 1)
        ++j;

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] >= j) {
            if (v[i] > j) {
                if (v[i]%(v[i]-j) != j) {
                    cout << -1 << endl;
                    return;
                }
                ++ans;
                have[j]=1;
            }
            while (have[j] == 1 && j <= n)
                ++j;
            if (j > n && i != v.size()-1) {
                cout << -1 << endl;
                return;
            }
        }
        else {
            cout << -1 << endl;
            return;
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
