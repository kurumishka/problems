#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    int ans = 0;
    for (int i = 1; i <= 50; ++i) {
        if ((l1 <= i) && (i <= r1) && (l2 <= i) && (i <= r2)) {
            ans=i;
            break;
        }
    }
    cout << (ans == 0 ? l1+l2 : ans) << endl;
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
