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
    string s;
    cin >> s;
    int def = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'A') ++def;
        else --def;
        if (def<0) goto no;
    }
    if (def<0 || s.back() == 'A') {
no:
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
    
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
