#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    V<int> a;
    int c = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i-1]) {
            a.pb(c);
            c=0;
        }
        ++c;
    }
    if (c != 0)
        a.pb(c);
    int ans = 0, pred = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i]%2 && pred)
            pred = 0;
        else if (a[i]%2)
            pred=1;
        if (pred) ++ans;
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)

    solve();
    return 0;
}
