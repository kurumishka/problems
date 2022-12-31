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
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    set<int> got = {1};
    int d = 1, ans = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] != d) {
            got.insert(a[i]);
            continue;
        }
        while (got.count(d))
            d++;
        if (d-1 == got.size()) ++ans;
        got.insert(d);
    }
    cout << ans << endl;
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
