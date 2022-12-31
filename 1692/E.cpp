#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n, s;
    cin >> n >> s;
    int sum = 0;
    V<int> a(n);
    for (auto& x : a) {
        cin >> x;
        sum+=x;
    }
    if (sum < s) {
        cout << -1 << endl;
        return;
    }
    int l = 0, r = 1, ans = 1e9;
    sum = a[0];
    while (r < n) {
        if (sum == s) {
            int len = r-l;
            ans = min(ans, n-len);
        }
        if (sum <= s) {
            sum+=a[r];
            ++r;
        }
        else if (sum > s) {
            sum-=a[l];
            ++l;
        }
    }
    if (sum == s)
        ans = min(ans, n-(r-l));
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
