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
    for (auto& x : a)
        cin >> x;
    for (int i = 0; i < n; ++i) {
        int k; cin >> k;
        string s;
        cin >> s;
        for (auto& x : s) {
            if (x=='D')
                ++a[i];
            else
                --a[i];
            a[i]+=10;
            a[i]%=10;
        }
    }
    for (auto& x : a)
        cout << x  << " ";
    cout << endl;
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
