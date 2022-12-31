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
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    V<int> v = a;
    sort(all(v));
    if (a == v) {
        cout << 0 << endl;
        return;
    }

    if (a[n-1] < a[n-2] || abs(a[n-1]-a[n-2]) >= (int)1e18 || a[n-2]-a[n-1] > a[n-2])
        cout << -1 << endl;
    else {
        cout << n-2 << endl;
        for (int i = 0; i < n-2; ++i)
            cout << i+1 << " " << n-1 << " " << n << endl;
    }
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
