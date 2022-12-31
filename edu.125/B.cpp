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
    int n, b, x, y;
    cin >> n >> b >> x >> y;
    V<int> a(n+1);
    a[0] = 0;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        a[i] = (a[i-1]+x > b) ? a[i-1]-y : a[i-1]+x;
        sum+=a[i];
    }
    cout << sum << endl;
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
