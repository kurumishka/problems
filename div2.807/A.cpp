#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n, x;
    cin >> n >> x;
    V<int> a(2*n);
    for (auto& x : a)
        cin >> x;
    sort(all(a));
    for (int i = 0; i < n; ++i) 
        if (a[i]+x > a[i+n]) {
            cout << "NO" << endl;
            return;
        }
    cout << "YES" << endl;
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
