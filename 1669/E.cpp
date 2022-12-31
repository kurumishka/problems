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
    V<string> a(n);
    for (auto& x : a)
        cin >> x;
    map<string, int> ms;
    map<char, int> cm1, cm2;
    int ans = 0;
    for (int i = n-1; i >= 0; --i){
        int d = cm2[a[i][1]]+cm1[a[i][0]]-2*ms[a[i]];
        ans+=d;
        ++ms[a[i]];
        ++cm2[a[i][1]];
        ++cm1[a[i][0]];
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
