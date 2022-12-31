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
    string s;
    cin >> s;
    V<int> blue, red;
    for (int i = 0; i < n; ++i){
        if (s[i] == 'R') red.pb(a[i]);
        else blue.pb(a[i]);
    }
    sort(all(blue));
    sort(all(red));
    int p = 1;
    auto reds = red.begin(), blues = blue.begin();
    while (p <= n) {
        if (blues != blue.end()) {
            if (*blues < p) {
                cout << "NO" << endl;
                return;
            }
            ++p;
            ++blues;
        }
        else if (reds != red.end()) {
            if (*reds > p) {
                cout << "NO" << endl;
                return;
            }
            ++p;
            ++reds;
        }
        else {
            cout << "NO" << endl;
            return;
        }
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
