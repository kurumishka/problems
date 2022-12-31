#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)


void solve() {
    int n;
    cin >> n;
    V<int> a(n), b(n);
    for (auto& x : a)
        cin >> x;
    for (auto& x : b)
        cin >> x;
    V<pair<int,int>> k;
    for (int j = 0; j < n; ++j)
        for (int i = 0; i < n-1; ++i)
            if (a[i+1] < a[i] || (a[i+1] == a[i] && b[i+1] < b[i])) {
                swap(a[i], a[i+1]);
                swap(b[i], b[i+1]);
                k.pb(make_pair(i+1, i+2));
            }
    for (int i = 0; i < n-1; ++i)
        if (b[i] > b[i+1]) {
            cout << -1 << endl;
            return;
        }
    cout << k.size() << endl;
    for (auto& x : k)
        cout << x.first << " " << x.second << endl;
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
