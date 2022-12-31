#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n;
    cin >> n;
    V<int> a(n);
    a[n-1] = n;
    a[n-2] = n-1;
    int s = 0;
    int l = n-2;
    if (n%2) {
        s = 3;
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;
    }
    for (int i = s; i < n-2; ++i)
        a[i] = l--;
    for (auto& x : a)
        cout << x << " ";
    cout << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
