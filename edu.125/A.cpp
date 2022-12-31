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
    double x, y;
    cin >> x >> y;
    if (x == 0 && y == 0) {
        cout << 0 << endl;
        return;
    }
    double res = sqrt(x*x+y*y);
    int r = res;
    cout << ((double)r == res ? 1 : 2) << endl;
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
