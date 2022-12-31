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


void solve() {
    int n, k;
    cin >> n >> k;
    V<int> a(n);
    map<int,int> bits;
    for (auto& x : a) {
        cin >> x;
        for (int i = 0; i < 31; ++i)
            if (!(x & (1 << i)))
                ++bits[i];
    }
    for (int i = 30; i >= 0 && k; --i) {
        if (bits[i] <= k) {
            for (int j = 0; j < n; ++j)
                a[j] |= (1 << i);
            k-=bits[i];
        }
    }
    int res = a[0];
    for (int i = 1; i < n; ++i)
        res &= a[i];
    cout << res << endl;
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
