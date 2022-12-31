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
    V<string> v = {"errorgorn", "maomao90"};
    auto it = v.begin();
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) continue;
        while (a[i] != 2) {
            --a[i];
            ++it;
            if (it == v.end()) it = v.begin();
        }
        ++it;
        if (it == v.end()) it = v.begin();
    }
    ++it;
    if (it == v.end()) it = v.begin();
    cout << *it << endl;
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
