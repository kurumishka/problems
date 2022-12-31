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
    int n;
    cin >> n;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    int ans = 0;
    for (int i = 1; i < n-1; ++i) {
        int sw = 0;
        if (a[i] > a[i-1] && a[i] > a[i+1]) {
            if (i+2 < n) sw = a[i+2];
            a[i+1] = max(a[i], sw);
            ++ans;
        }
    }
    cout << ans << endl;
    for (auto& x : a)
        cout << x << " ";
    cout << endl;
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
