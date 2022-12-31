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
    map<char,int> m;
    for (auto& x : s)
        m[x]++;
    int ans = 0;
    for (auto it = m.begin(); it != m.end(); ++it)
        ans += it->second+1;
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
