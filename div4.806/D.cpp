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
    V<string> a(n);
    map<string, int> s;
    for (auto& x : a) {
        cin >> x;
        ++s[x];
    }
    V<int> ans (n);
    for (int i = 0; i < n; ++i) {
        if (a[i].size() == 1) {
            ans[i] = 0;
            continue;
        }
        string l,r;
        l=a[i];
        r.pb(l.back());
        l.pop_back();
        while (l.size()) {
            if (s[l] > 0 && s[r] > 0) {
                ans[i]=1;
                goto end;
            }
            r = string(1, l.back()) + r;
            l.pop_back();
        }
        ans[i]=0;
end:;
    }
    for (auto& x : ans)
        cout << x;
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
