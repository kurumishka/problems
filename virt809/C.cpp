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
    for (auto& x : a)
        cin >> x;
    int ans = 0;
    V<int> sums(n);
    for (int i = 0; i < n; ++i) {
        sums[i] = (i == 0 ? 0 : sums[i-1]);
        if (i&1 && max(a[i+1], a[i-1]) >= a[i])
            sums[i] = sums[i-1]+(max(a[i+1], a[i-1])-a[i])+1;
    }
    if (n&1) {
        cout << sums[n-1] << endl;
        return;
    }
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
