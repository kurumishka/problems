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
    int n, k;
    cin >> n >> k;
    V<int> a(n);
    for (auto& x : a)
        cin >> x;
    int ans = 0;
    sort(all(a), [](int& a, int&b){return a > b;});
    for (int i = 0; i < k; ++i)
        ans+=a[i+k]/a[i];
    for (int i = 2*k; i < n; ++i)
        ans+=a[i];
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
