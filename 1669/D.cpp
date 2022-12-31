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
    string s;
    cin >> s;
    int b = 0, r = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') ++b;
        else if (s[i] == 'R') ++r;
        else {
            if ((b && !r) || (!b && r))
                break;
            b = r = 0;
        }
    }
    cout << (((b && !r) || (!b && r)) ? "NO" : "YES") << endl;

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
