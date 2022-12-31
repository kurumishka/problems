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
    if (next_permutation(all(a))) {
        for (auto& x : a)
            cout << x << " ";
        cout << endl;
        return;
    }
    sort(all(a));
    for (auto& x : a)
        cout << x << " ";
    cout << endl;
}

signed main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
#ifdef ONLINE_JUDGE
    freopen("success.in", "r", stdin);
    freopen("success.out", "w", stdout);
#endif

    solve();
    return 0;
}
