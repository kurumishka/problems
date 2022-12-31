#pragma GCC optimize("O2")

#include <bits/stdc++.h>
template<class T>
using V = std::vector<T>;
using namespace std;
#define endl "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
#define ANS ((int)1e9+7)

V<char> used;

void solve() {
    int n;
    cin >> n;
    V<int> ans;
    used = V<char> (n+1,0);
    int j = 1;
    while(ans.size() != n) {
        while (used[j] == 1) ++j;
        int x = j;
        while(x <= n){
            used[x]=1;
            ans.pb(x);
            x*=2;
        }
    }
    cout << 2 << endl;
    for (auto& x : ans)
        cout << x << " ";
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
