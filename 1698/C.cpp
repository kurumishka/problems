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
    set<int> e;
    for (auto& x : a) {
        cin >> x;
        e.insert(x);
    }
    sort(all(a));
    int l = a[0]+a[1]+a[2];
    int r = a[n-1]+a[n-2]+a[n-3];
    if (!e.count(l) || !e.count(r)) {
        cout << "NO" << endl;
        return;
    }
    if (e.count(a[0]+a[1]+a[n-1]) && e.count(a[n-1]+a[n-2]+a[0])) cout << "YES" << endl;
    else cout << "NO" << endl;
    //for (int i = 0; i < n; ++i)
    //    for (int j = i+1; j < n; ++j)
    //        for (int k = j+1; k < n; ++k) {
    //            int sum = a[i]+a[j]+a[k];
    //            if (!e.count(sum)) {
    //                cout << "NO" << endl;
    //                return;
    //            }
    //        }
    //end:
    //cout << "YES" << endl;
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
