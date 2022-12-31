#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    reverse(all(s));
    int k;
    cin >> k;
    set<char> chs;
    for (int i = 0; i < k; ++i) {
        string c;
        cin >> c;
        chs.insert(c[0]);
    }
    int ans = 0, l = -1;
    for (int i = 0; i < n; ++i) {
        if (l==-1 && !chs.count(s[i]))
            continue;
        l=i;
        break;
    }
    if (l==-1) {
        cout << 0 << endl;
        return;
    }
    int r = 0;
    for (int i = l+1; i < n; ++i) {
        ++r;
        ans = max(r, ans);
        if (chs.count(s[i])) {
            r=0;
            //++i;
        }
    }
    
    cout << ans << endl;
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
