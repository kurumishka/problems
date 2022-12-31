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
    V<int> a(n);
    bool ed = false;
    for (auto& x : a) {
        cin >> x;
        if (x == 1) ed = true;
    }
    sort(all(a));
    if (a[0] == a.back() || !ed) {
yes:
        cout << "YES" << endl;
        return;
    }

    for (int i = a.size()-1; i > 0; --i)
        if (a[i]-a[i-1] == 1) {
            cout << "NO" << endl;
            return;
        }
    goto yes;
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
