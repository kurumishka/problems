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
    V<int> a(n);
    int sum = 0;
    for (auto& x : a)
        cin >> x;
    if (a.back() > 0 || a[0] < 0) {
        fuck:
        cout << "no" << endl;
        return;
    }
    for (int i = 0; i < n; ++i) {
        if (i != 0 && sum == 0 && a[i] != 0) goto fuck;
        sum += a[i];
        if (sum < 0) goto fuck;
    }
    cout << (sum==0 ? "yes" : "no") << endl;
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
