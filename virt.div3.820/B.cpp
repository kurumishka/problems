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
    string al = "0abcdefghijklmnopqrstuvwxyz", ans;
    reverse(all(s));
    string num = string();
    int r = 0;
    for (auto& x : s) {
        if (x == '0' && r == 0) {
            r=2;
            continue;
        }
        num+=x;
        if (r) {
            --r;
            if (r != 0)
                continue;
        }
        reverse(all(num));
        int i = stoi(num);
        num = string();
        ans += al[i];
    }
    reverse(all(ans));
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
