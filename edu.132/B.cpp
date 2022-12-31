#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    V<int> f(n), s(n);
    int prev =0;
    for (int i = 0; i < n; ++i) {
        f[i] = max(prev-a[i], 0ll);
        prev = a[i];
    }
    prev = 0;
    for (int i = n-1; i >= 0; --i) {
        s[i] = max(prev-a[i], 0ll);
        prev = a[i];
    }
    V<int> suf(n), pref(n);
    for (int i = 0; i <n; ++i)
        pref[i] = (i==0 ? f[i] : pref[i-1]+f[i]);
    for (int i = n-1; i >= 0; --i)
        suf[i] = (i == n-1 ? s[i] : suf[i+1]+s[i]);


    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        if (a <= b) {
            int d = (a == 1 ? 0 : pref[a-1]);
            cout << pref[b-1]-d << endl;
            continue;
        }
        int d = (a==n ? 0 : suf[a-1]);
        cout << suf[b-1]-d << endl;
    }

}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
