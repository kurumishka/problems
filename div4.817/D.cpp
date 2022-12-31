#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define int long long

template<typename T> 
using V = std::vector<T>;
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    V<int> a(n), b(n);
    iota(all(a), 0);
    iota(b.rbegin(), b.rend(), 0);
    V<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        v[i] = (s[i] == 'L' ? a[i] : b[i]);
        sum += v[i];
    }
    V<int> dif(n);
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'L')
            dif[i] = b[i]-a[i];
        else dif[i] = a[i]-b[i];
    }
    sort(dif.rbegin(), dif.rend());
    for (int i = 0; i < n; ++i) {
        if (sum + dif[i] >= sum) {
            cout << sum+dif[i] << " ";
            sum+=dif[i];
        } else {
            cout << sum << " ";
        }
    }
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
