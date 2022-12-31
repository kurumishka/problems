#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)
#define int long long


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ed= 0, zero = 0, ans = n;
    char pred = s[0];
    if (pred == '0') ++zero;
    else ++ed;
    for (int i = 1; i < n; ++i){
        if (pred == '0' && s[i] == '1') {
            ans+=zero;
            ed+=zero+1;
            zero=0;
            pred = '1';
        } else if (pred == s[i]) {
            if (pred == '0') ++zero;
            else ++ed;
        } else {
            ans+=ed;
            zero+=ed+1;
            ed=0;
            pred = '0';
        }
    }
    cout << ans << endl;
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
