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
    map<int,int> a;
    int c = 0, o = 0;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        ++a[x];
    }
    for (auto it = a.begin(); it != a.end(); ++it) {
        if (it->second > 1) ++c;
        else ++o;
    }
    cout << c + o/2 + (o%2 ? 1 : 0) << endl;
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
