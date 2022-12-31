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
    int a[2][2];
    int ed = 0;
    for (auto& x : a)
        for (auto& y : x) {
            cin >> y;
            if (y==1) ++ed;
        }
    if (ed == 4) {
        cout << 2 << endl;
    }
    else if (ed == 0) {
        cout << 0 << endl;
    }
    else cout << 1 << endl;
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
